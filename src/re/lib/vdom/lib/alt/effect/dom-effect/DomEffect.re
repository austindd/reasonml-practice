

module Imports = {
  type node = VdomCore__Types.node;
  type htmlTag = VdomCore__Types.htmlTag;
  type attribute = VdomCore__Types.attribute;
  type attributeArray = VdomCore__Types.attributeArray;
  type eventName = | OnClick;
  type eventHandler;
  
}

module Impl = (T: {
  type node;
  type htmlTag;
  type attributeArray;
  type attribute;
  type eventName;
  type eventHandler;
}) => {

  type t =
    
    | Noop 

    | TestEffect(int) 

    | CreateNode(T.node, Dom.htmlElement)
    | RemoveNode(T.node, Dom.htmlElement)

    | SetAttribute(T.attribute, Dom.htmlElement)
    | SetAttributesArray(T.attributeArray, Dom.htmlElement)

    | RemoveAttribute(T.attribute, Dom.htmlElement)
    | RemoveAttributeArray(T.attributeArray, Dom.htmlElement)

    | AddEventListener(T.eventName, T.eventHandler, Dom.htmlElement)
    | RemoveEventListener(T.eventName, T.eventHandler, Dom.htmlElement)

    | NormalizeTextNodes(Dom.htmlElement);
    


// ___________________ Testing ___________________



  let (<<<) = (f, g) => x => f(g(x)) ;

  
  type effectError = {
    dateTime: Js.Date.t,
    data: t,
  }

  type result('a, 'b) = Ok('a) | Error('b);

  let handleError: (t => effectError) = effect => {
    let errorRecord = {
      dateTime: Js.Date.make(),
      data: effect,
    }
    Js.log(errorRecord);
    errorRecord;
  }

  Random.self_init();

  let logEffect = (effect: t) => {
    Js.log(effect);
    switch(Random.bool()) {
      | true => Ok(effect);
      | false => Error(effect);
    }
  };

  let apply2 = (a, b, f) => f(a, b);

  type runEffects('res, 'err) = (
    (t => result('res, 'err)),                    // callback
    (t => 'err),                    // onError
    ((option(array('res))), option(array('err))),
    array(t)
    ) => (option(array('res)), option(array('err)));

  let runEffects = (callback, onError, (good, bad), effectArr) => {

    let rec run__effects = (length, i, (goodArray, badArray), effects) => {
      
      Js.log3(Array.length(effects), i, length);
      switch(i < length) {
        | false => (goodArray, badArray); // 
        | true => {

          Js.log(i);
          let run = run__effects(length, i + 1);
          let res = callback(Array.get(effects, i));

          switch (res) {

            | Ok(eff) => {
              let g = Belt.Option.getWithDefault(goodArray,
                (_: option(array(t))) => Array.make(1, eff)
              );
              run((Some(g), badArray), effects);
            }

            | Error(err) => { 
              let errorRecord = onError(err);
              let b = Belt.Option.getWithDefault(badArray,
                (_) => Array.make(1, errorRecord) : (option(array(effectError))) => (array(effectError))
              );
              run((goodArray, Some(b)), effects);
            }
          };
        }
      };
    }
    run__effects(Array.length(effectArr), 0, (good, bad), effectArr);
  };

  let makeTestEffect = (n: int) => {
    TestEffect(n);
  };

  let myArray: array(t) = Array.init(20, makeTestEffect);

  type test = (option(array(t)), option(array(effectError)));
  let test = runEffects(logEffect, handleError, (None, None), myArray);

  [@bs.scope "console"] [@bs.val] external logDir: 'a => unit = "dir";
  [@bs.scope "console"] [@bs.val] external logTable: 'a => unit = "table";

//  let printResults: (option(array(t)), option(array(effectError))) = ((good, bad)) => {
//    logTable(good);
//    logTable(bad);
//  };

//  printResults(test);

}

include Impl(Imports);







