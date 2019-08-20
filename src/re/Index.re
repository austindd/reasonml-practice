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
    make: unit => Dom.htmlElement,
    remove: Dom.htmlElement => option(Dom.htmlElement)
  }

  let applicationRoot = {
    make: (_) => document
      |> Document.createElement("div")
      |> Element.asHtmlElement
      |> Belt.Option.getExn
      |> (el) => {
          HtmlElement.setId(el, "applicationRoot");
          HtmlElement.setClassName(el, "root");
          el |> HtmlElement.setAttribute("style", "background-color: red; height: 200px; width: 200px;");
          el |> HtmlElement.addEventListener("click", printClicked);
          el;
        },

    remove: (rootNode) => {
      let parent = rootNode
        |> HtmlElement.parentNode
        |> Option.flatMap(HtmlElement.ofNode);
      switch(parent) { // parentNode will may be undefined if element is not currently attached
        | Some(p) => {
            let res = p |> HtmlElement.removeChild(rootNode);
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
  let headerAttrs = Js.Dict.empty()
  Js.Dict.set(headerAttrs, "color", "blue");

  let header = ReQuery.makeElement("h1", Some(headerAttrs), None);

  Js.log(header);
    

}




 



