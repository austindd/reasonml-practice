module Impl = (T: {
  type virtualNode;
  type props;
  type effect;
  type state;
}) => {
  type t;
}

include Impl({
  type virtualNode;
  type props;
  type effect;
  type state;
});


