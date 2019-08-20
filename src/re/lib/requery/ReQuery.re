
open Webapi.Dom;


type html_node_like = [
    `RQ_Node(Dom.node) 
  | `RQ_Element(Dom.element) 
  | `RQ_HtmlElement(Dom.htmlElement) 
  | `RQ_HtmlDocument(Dom.htmlDocument) 
  | `RQ_Document(Dom.document)
  | `RQ_EventTarget(Dom.eventTarget)
]

type html_array_like =
    RQ_HtmlCollection(Dom.htmlCollection) 
  | RQ_NodeList(Dom.nodeList) 
  | RQ_NodeArray(array(Dom.node)) 
  | RQ_ElementArray(array(Dom.element))
  | RQ_HtmlElementArray(array(Dom.htmlElement))
  | RQ_EventTargetArray(array(Dom.eventTarget))

type html_array = 
    RQ_NodeArray(array(Dom.node)) 
  | RQ_ElementArray(array(Dom.element))
  | RQ_HtmlElementArray(array(Dom.htmlElement))
  | RQ_EventTargetArray(array(Dom.eventTarget))

type reQuery = array(Dom.htmlElement);

let js_nodeListToArray: Dom.nodeList => array(Dom.node) = [%raw {| 
  function(elements) {
    return Array.prototype.slice.apply(elements)
  } 
|}]

let js_htmlCollectionToArray: Dom.htmlCollection => array(Dom.element) = [%raw {| 
  function(elements) {
    return Array.prototype.slice.apply(elements);
  } 
|}]

let wrapElement: (Dom.htmlElement => reQuery) = (element) => [|element|]; 

//let wrapHtmlElements: (html_array_like => reQuery) = elements => {
//  switch(elements) {
//    | RQ_HtmlCollection(elements) => js_htmlCollectionToArray(elements)
//    | RQ_NodeList(elements) => js_nodeListToArray(elements)
//    | RQ_EventTargetArray(elements) => elements
//    | RQ_NodeArray(elements) => elements
//    | RQ_ElementArray(elements) => elements
//    | RQ_HtmlElementArray(elements) => elements
//  }
//}

let appendChild = (parent, child) => {
  Element.appendChild(parent, child);
  parent;
}

let appendChildren = (parent, children) => {
  Belt.Array.forEach(children, child => {
    Element.appendChild(parent, child);
  });
  parent;
}

let setAttrs: ((Js.Dict.t(string), Dom.element_like('b)) => Dom.element_like('b)) = (attributes, element) => {
  let keys = Js.Dict.keys(attributes);
  let length = Belt.Array.length(keys);
  if (length == 0) {
    element;
  }
  else {
    Belt.Array.forEach(keys, (key) => {
      element |> Element.setAttribute(key, Js.Dict.unsafeGet(attributes, key));
    });
    element;
  }
}

let makeElement: ((string, option(Js.Dict.t('a)), option(array(Dom.element))) => Dom.element) =
  (tagName, attributes, children) => {
    let el = document |> Document.createElement(tagName);
    let ret = switch (attributes, children) {
      | (None, None) => el
      | (None, Some(children)) => appendChildren(el, children) // returns parent element
      | (Some(attributes), None) => setAttrs(attributes, el)
      | (Some(attributes), Some(children)) => setAttrs(attributes, el) -> appendChildren(children);
    }
    ret;
  }

let getById: (string => option(Dom.element)) = (id) => {
  document |> Document.getElementById(id);
}

let getByIdWithExn: (string => Dom.element) = (id) => {
  document
    |> Document.getElementById(id)
    |> Belt.Option.getExn;
}

let getByIdWithDefault: (string, 'a => 'b) => (Dom.element) = (id, defaultFn) => {
  switch(document |> Document.getElementById(id)) {
    | None => defaultFn(id);
    | Some(el) => el;
  }
}

//let getByClassName: (string => rQuery) = (className) => {
//  wrapElements(document |> Document.getElementsByClassName(className));
//};
