
module SHOW = {

  module Default = (T: { type t; }) => {
    let show: T.t => string = Js.String.make;
  }

  module Custom = (T: { type t; let show: t => string; }) => {
    let show = T.show;
  }

}

//  // Example:
//
//module UserAction = { 
//
//  type actionType = Login | ClickButton | FillForm;
//  type t = (actionType, Js.Date.t);
//  type actionList = list(t);
//
//  include SHOW.Custom({
//    type nonrec t = t;
//    let show = (action: t) => {
//      switch(action) {
//        | (Login, dateTime) => "[Login: " ++ Js.Date.toString(dateTime) ++ "]";
//        | (ClickButton, dateTime) => "[ClickButton: " ++ Js.Date.toString(dateTime) ++ "]";
//        | (FillForm, dateTime) => "[FillForm: " ++ Js.Date.toString(dateTime) ++ "]";
//      };
//    }
//  });
//
//};


