
module Impl = {

  module Comp = () => { }

  type node = Node(htmlTag, maybeAttributes, maybeChildren) | Fragment(maybeChildren)

  and maybeAttributes = | Nil | Attrs(attributeArray)

  and maybeChildren = | Nil | Children(nodeArray)

  and nodeArray = array(node)

  and htmlTag = HtmlTag__Type.t

  and attribute = Attribute__Type.t

  and attributeArray = array(attribute)

  and component(_) = | Component('a): component(('a) => node)


  // type memo('cache, 'a, 'b) = ('a => 'b) => ('a => 'b);


}

include Impl;

module Header = {

  module Props = {
    type t = {
      columnCount: int,
    };
    module type T = {
      let columnCount: int;
    }
  }

  module Cache = Hashtbl.Make({
    type t = Props.t;
    let hash = Hashtbl.hash;
    let equal = (a: t, b: t) => 
      switch(a == b){
        | true => true;
        | false => false;
      };
  });

  let render = (props: Props.t) => {
    let count = props.columnCount;
    let headerChildren = Array.make(count, Node(Div, Nil, Nil));
    Node(Div, Nil, Children(headerChildren));
  }

}

let myVdom =
  Node(Div, Attrs([|Style("color: green")|]), Children([|
    Node(Div, Nil, Nil),
    Header.render({columnCount: 5})
  |])); 


