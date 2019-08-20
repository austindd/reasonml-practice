// All type of nodes that can exist in the VDOM tree must be defined recursively,
// so their implementations must live in the same file (here);
// 
// 

module Impl = {

  module rec T: {
    type htmlTag;
    type attribute;
    type attributeList;
    type childList;
    type abstractNodeType;
    //type abstractNodeList;
    type virtualNode;
    type component;
    type action;
    type actionList;
    type props('a) constraint 'a = {.. };
  } = {
    type htmlTag = Html_Tag_Type.t;
    type attribute = Attribute_Type.t;
    type attributeList = Attribute_List_Type.t;
    type childList = Child_List_Type_Init.t;
    type abstractNodeType = Abstract_Node_Type_Init.t;
    //type abstractNodeList = list(Abstract_Node_Type_Init.t);
    type virtualNode = Virtual_Node_Type_Init.t;
    type component = Component_Type_Init.t;
    type action = Action_Type.t;
    type actionList = Action_List_Type.t;
    type props('a) = Props_Type.t('a) constraint 'a = {.. };
  }
    
  and Virtual_Node_Type_Init: { type t; } = {
    type t = (T.htmlTag, T.attributeList, T.childList);
  }

  and Child_List_Type_Init: { type t; } = { 
    type t = list(T.abstractNodeType);
  }

  and Component_Type_Init: {
    type t;
  } = {
    type t = {
      actions: option(T.actionList),
      children: option(T.childList),
    }
  }

  and Abstract_Node_Type_Init: { type t; } = { type t; };

} 


include Impl;
