open Relude.Globals;
RJs.Console.IO.log("Hello, BuckleScript and Reason!");

module PracticeMain = {

  open Webapi.Dom;

  module RQ = ReQuery;

  let data = [|1, 2, 3|];

  let documentBody = document
    -> Document.unsafeAsHtmlDocument // returns option(Dom.element)
    -> HtmlDocument.body
    -> Belt.Option.getExn
    -> Element.asHtmlElement
    -> Belt.Option.getExn

  Js.log(documentBody);
    
  let printClicked = (_) => Js.log("CLICKED");

  type applicationRoot = {
    make: unit => Dom.element,
    detach: Dom.element => option(Dom.element)
  }

  let applicationRoot = {

    make: (_) => document
      |> Document.createElement("div")
      |> (el) => {
          Element.setId(el, "applicationRoot");
          Element.setClassName(el, "root");
          el |> Element.setAttribute("style", "background-color: red; height: 200px; width: 200px;");
          Element.asEventTarget(el) |> EventTarget.addEventListener("click", printClicked);
          el;
        },

    detach: (rootNode) => {
      let parent = rootNode
        |> Element.parentNode
        |> Option.flatMap(Element.ofNode);

      switch(parent) {
        | Some(p) => {
            let res = p |> Element.removeChild(rootNode);
            Js.log(p);
            Some(res);
          }
        | None => None;
      }
    }
  }

  let root = applicationRoot.make();
  
  documentBody |> HtmlElement.appendChild(root);

  Js.log(root);

  let headerAttrs = Js.Dict.empty();
  Js.Dict.set(headerAttrs, "color", "blue");

  let header = ReQuery.makeElement("h1", Some(headerAttrs), None);

  Js.log(header);
    

}




 



