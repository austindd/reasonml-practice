type kind(_) = | Any: kind(string);

module type UI_Type = {
  type t;
  type data;
  let update: (t, data) => t;
};


module Make = (T: UI_Type) => {
  
  type t = T.t;
  type data = T.data;
  let update = T.update;

};


