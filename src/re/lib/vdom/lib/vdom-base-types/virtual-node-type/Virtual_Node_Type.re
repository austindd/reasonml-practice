module Impl = (T: {
  type t;
}) => {
  type nonrec t = T.t
}
include Impl(Vdom_Tree_Recursive_Types.Virtual_Node_Type_Init);
