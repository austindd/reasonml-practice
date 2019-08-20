module Impl = (T: { type t; }) => {
  type run = T.t => bool;
};

type t;


include Impl({
  type nonrec t = t;
});
