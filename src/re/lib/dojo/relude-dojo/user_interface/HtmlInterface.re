module Impl = ( T: { type element; },) => {

  module type Html_Interface_Types = {

    type msgBanner = T.element;

    type resultBanner = T.element;

    type board = { 
      a1: T.element, a2: T.element, a3: T.element,
      b1: T.element, b2: T.element, b3: T.element,
      c1: T.element, c2: T.element, c3: T.element,
    };

  };

  module Make = (T: Html_Interface_Types) => {
    include T;
    type t = {
      msgBanner: msgBanner,
      resultBanner: resultBanner,
      board: board,
    };

  };

};

