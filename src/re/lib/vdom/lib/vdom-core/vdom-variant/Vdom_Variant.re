module Impl = (T: {
  type virtualNode;
  type component;
}) => {

  type t =
    | Node(T.virtualNode) 
    | Component(T.component);
}

include Impl({
  type virtualNode = Virtual_Node_Type.t;
  type component = Component_Type.t;
});
