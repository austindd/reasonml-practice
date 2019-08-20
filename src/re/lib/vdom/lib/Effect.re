open Webapi.Dom;

type validElement = 
  | Valid_Element(Dom.htmlElement)
  | Valid_FormElement(Dom.htmlFormElement)
  | Valid_InputElement(Dom.htmlInputElement);
  // | Valid_SlotElement(Dom.htmlSlotElement)

type setAttribute = {
  el: validElement,
  name: string,
  value: string
}

type removeAttribute = {
  el: validElement,
  name: string
}

type t('a) = ('a) => unit;

type eventType;

type nestedJsDict('a) = Js.Dict.t(Js.Dict.t('a))

type attribute('a) = 
  | AttrStr((string, 'a))
  | AttrDict((string, Js.Dict.t('a)))

type effectType('a) =
  | CreateElement(string)
  | RemoveElement(validElement)
  | SetAttributes(validElement, option(array(attribute('a)))) 
  | RemoveAttributes(validElement, array(attribute('a))) 
  | SetChildren(validElement) 
  | RemoveChildren(validElement) 
  | SetEventListener(eventType => unit) 
  | RemoveEventListener(eventType => unit) 

module type T = {
  let run: (. unit) => unit;
}

module type Make = T;

module Make = (M: T) => {
  let run = M.run;
}

let map = effect => (module Make({
  let run = (. ) => { effect(. ); (); };
}): Make);

let bind = (module M: T) => {
  (module Make({
    let run = (. ) => M.run(. );
  }): Make)
}

let join = (module M: T) => {
  M.run(. );
  ();
}


module SetAttribute {
  let make: (validElement, string, string) => t('a) =
    (el, name, value) => {
    switch(el) {
      | Valid_Element(el) => () => el |> HtmlElement.setAttribute(name, value)
      | Valid_FormElement(el) => () => el |> HtmlFormElement.setAttribute(name, value)
      | Valid_InputElement(el) => () => el |> HtmlInputElement.setAttribute(name, value)
    }
  }
}


let myEffect = map((. ) => Js.log("Side Effects!!"))






