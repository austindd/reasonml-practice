"use strict"

let root = (document.getElementById('root') || (function() {
  let _root = document.createElement('div');
  _root.setAttribute('class', 'root');
  document.body.appendChild(_root);
  return _root;
})());

let greeting = document.createElement('h1');

let greetText = document.createTextNode('Hello World');

greeting.appendChild(greetText);

Object.assign(greeting.style, {
  backgroundColor: "lightblue",
  minHeight: "100px",
  minWidth: "200px",
  border: "1px solid black"
});

root.appendChild(greeting);

let childNodes = greeting.childNodes;
let children = greeting.children;

console.dir(childNodes);
console.dir(children);


import '../re/Index.bs.js';

/*********************************/
/* Webpack Hot Module Reloading: */
/*********************************/
if (module.hot) {
  module.hot.dispose(function() {
    Array.prototype.slice.apply(document.body.children).forEach((node) => {
      if(node.tagName.toUpperCase() === "SCRIPT") {
        // do nothing
      }
      else {
        document.body.removeChild(node);
      }
    });
    console.clear();
  });
  module.hot.accept(function() {
    console.clear();
    console.log('-- Application Updated --\r\n'); 
  });
}
