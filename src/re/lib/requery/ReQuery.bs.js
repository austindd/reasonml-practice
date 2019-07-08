// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Belt_Array = require("bs-platform/lib/js/belt_Array.js");
var Belt_Option = require("bs-platform/lib/js/belt_Option.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");

function wrapElement(element) {
  return /* array */[element];
}

function wrapElements(elements) {
  switch (elements.tag | 0) {
    case 0 : 
        return (
        function(htmlCollection) {
          return Array.prototype.slice.apply(htmlCollection);
        }
      );
    case 1 : 
        return (
        function(nodeList) {
          return Array.prototype.slice.apply(nodeList);
        }
      );
    case 2 : 
        return (
        function(nodeArray) {
          return Array.prototype.slice.apply(nodeArray);
        }
      );
    
  }
}

var arrayFromNodeList = (
    function(nodeList) {
      return Array.prototype.slice.apply(nodeList);
    }
  );

var arrayFromHtmlCollection = (
    function(htmlCollection) {
      return Array.prototype.slice.apply(htmlCollection);
    }
  );

function appendChild(parent, child) {
  child.appendChild(parent);
  return parent;
}

function appendChildren(parent, children) {
  Belt_Array.forEach(children, (function (child) {
          child.appendChild(parent);
          return /* () */0;
        }));
  return parent;
}

function setAttrs(attributes, element) {
  var keys = Object.keys(attributes);
  var length = keys.length;
  if (length === 0) {
    return element;
  } else {
    Belt_Array.forEach(keys, (function (key) {
            element.setAttribute(key, attributes[key]);
            return /* () */0;
          }));
    return element;
  }
}

function makeElement(tagName, attributes, children) {
  var el = document.createElement(tagName);
  if (attributes !== undefined) {
    var attributes$1 = Caml_option.valFromOption(attributes);
    if (children !== undefined) {
      return appendChildren(setAttrs(attributes$1, el), children);
    } else {
      return setAttrs(attributes$1, el);
    }
  } else if (children !== undefined) {
    return appendChildren(el, children);
  } else {
    return el;
  }
}

function getById(id) {
  return Caml_option.nullable_to_opt(document.getElementById(id));
}

function getByIdWithExn(id) {
  return Belt_Option.getExn(Caml_option.nullable_to_opt(document.getElementById(id)));
}

function getByIdWithDefault(id, defaultFn) {
  var match = document.getElementById(id);
  if (match == null) {
    return Curry._1(defaultFn, id);
  } else {
    return match;
  }
}

var getByClassName = /* () */0;

exports.wrapElement = wrapElement;
exports.wrapElements = wrapElements;
exports.arrayFromNodeList = arrayFromNodeList;
exports.arrayFromHtmlCollection = arrayFromHtmlCollection;
exports.appendChild = appendChild;
exports.appendChildren = appendChildren;
exports.setAttrs = setAttrs;
exports.makeElement = makeElement;
exports.getById = getById;
exports.getByIdWithExn = getByIdWithExn;
exports.getByIdWithDefault = getByIdWithDefault;
exports.getByClassName = getByClassName;
/* arrayFromNodeList Not a pure module */