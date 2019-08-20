type colorScheme = 
  | LightMode 
  | DarkMode;

//module Make: Make with module VirtualNode = VirtualNode = (
//  VirtualNode: {type t;},
//  Config: {
//    let colorScheme: colorScheme;
//  }
//) => {
//  let render: VirtualNode.t = Div(Attr([Style("color: green")]));
//}

//
//let test: VirtualNode.t = 
//  Div(Attrs([Style("color: blue"), Class("main")]), Children([
//    H1(Attrs([Style("min-height: 80px")]), Nil)
//  ]));
//
//

