import './Demo.bs.js';
"use strict"


let greeting = document.createElement('h1');
let greetText = document.createTextNode('Hello World');

greeting.appendChild(greetText);

Object.assign(greeting.style, {
  backgroundColor: "lightblue",
  minHeight: "100px",
  minWidth: "200px",
  border: "1px solid black"
});

document.body.appendChild(greeting);

console.log("Done!");

if (module.hot) {
  module.hot.accept(function() {
    console.log('Accepting the updated printMe module!'); 
  });
}
