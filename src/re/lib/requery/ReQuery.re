
open Webapi.Dom;

//type html_node_like('t) = 
//    Node(Dom.node) 
//  | Element(Dom.element) 
//  | HtmlElement(Dom.htmlElement) 
//  | HtmlDocument(Dom.htmlDocument) 
//  | Document(Dom.document);
//
type html_array_like = 
    RQ_HtmlCollection(Dom.htmlCollection) 
  | RQ_NodeList(Dom.nodeList) 
  | RQ_NodeArray(array(Dom.node)) 
  | RQ_ElementArray(array(Dom.element))
  | RQ_HtmlElementArray(array(Dom.htmlElement))
  | RQ_EventTargetArray(array(Dom.eventTarget))
  


type rQuery = array(Dom.element);

let wrapElement: (Dom.element => rQuery) = (element) => [|element|]; 

let wrapElements: (html_array_like => rQuery) = elements => {
  switch(elements) {
    | RQ_HtmlCollection(elements) => [%raw {|
        return Array.prototype.slice.apply(elements);
      |}]
    | RQ_NodeList(elements) => [%raw {|
        return Array.prototype.slice.apply(elements);
      |}]
    | RQ_EventTargetArray(elements) => [%raw {|
        return Array.prototype.slice.apply(elements);
      |}]
    | RQ_NodeArray(elements) => [%raw {|
        return Array.prototype.slice.apply(elements);
      |}]
    | RQ_ElementArray(elements) => [%raw {|
        return Array.prototype.slice.apply(elements);
      |}]
    | RQ_HtmlElementArray(elements) => [%raw {|
        return Array.prototype.slice.apply(elements);
      |}]
  }
}

let arrayFromNodeList: Dom.nodeList => array(Dom.node) = {
  [%raw {|
    function(nodeList) {
      return Array.prototype.slice.apply(nodeList);
    }
  |}];
}

let arrayFromHtmlCollection: Dom.htmlCollection => array(Dom.element) = {
  [%raw {|
    function(htmlCollection) {
      return Array.prototype.slice.apply(htmlCollection);
    }
  |}];
}

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

let getByClassName: (string => rQuery(option(Dom.eventTarget_like('a)))) = (className) => {
  wrapElements(document |> Document.getElementsByClassName(className));
};
