type t;

module Action = {
  type htmlTag;
  type actionCode('a) =
    | SetState 
    | PassState 
    | DomEffect 



  type nodeRef = (htmlTag, Dom.htmlElement);

  type t('code, 'a, 'b) = (actionCode('code), 'a => 'b);

  type abstractNode('node) = | Element('node) | Component('node);
  
  

}
