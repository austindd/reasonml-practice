module Composition {

  type range_1_10 = None | One | Two | Three | Four | Five | Six | Seven | Eight | Nine | Ten;
  let intRange_1_10 = n: range_1_10 => switch (n) {
    | None => None
    | One => 1
    | Two => 2
    | Three => 3
    | Four => 4
    | Five => 5
    | Six => 6
    | Seven => 7
    | Eight => 8
    | Nine => 9
    | Ten => 10
  }

  type non_zero_int = Zero | NonZero;
  let non_zero_int = n: non_zero_int => switch (n) {
    | Zero => None
    | NonZero => n
  }

  let trace1 = (a) => {
    Js.log(a);
    a;
  }
  let trace2 = (~a) => (~b) => {
    Js.log2(a, b);
    a -> b;
  }
  let trace3 = (a, b, c) => {
    Js.log3(a, b, c);
    a -> b -> c;
  }
  let trace4 = (a, b, c, d) => {
    Js.log4(a, b, c, d);
    a -> b -> c -> d;
  }


  let traceMany = (args: array('a)) => {
    Js.logMany(args);
    args;
  };

  let lift1 = v => a => a(v);
  let lift2 = v => (a, b) => (a(v), b(v));
  let lift3 = v => (a, b, c) => (a(v), b(v), c(v));
  let lift4 = v => (a, b, c, d) => (a(v), b(v), c(v), d(v));
  let lift5 = v => (a, b, c, d, e) => (a(v), b(v), c(v), d(v), e(v));
  let lift6 = v => (a, b, c, d, e, f) => (a(v), b(v), c(v), d(v), e(v), f(v));

  let apply1 = v => a => v(a);
  let apply2 = v => (a, b) => (v(a), v(b));
  let apply3 = v => (a, b, c) => (v(a), v(b), v(c));
  let apply4 = v => (a, b, c, d) => (v(a), v(b), v(c), v(d));
  let apply5 = v => (a, b, c, d, e) => (v(a), v(b), v(c), v(d), v(e));
  let apply6 = v => (a, b, c, d, e, f) => (v(a), v(b), v(c), v(d), v(e), v(f));

  let left = (a: 'a, b) => (a: 'a);
  let right = (a, b) => b;

  let b1 = (a, b, c, d) => a(b(c)(d));
  let flip = (a, b) => (b, a);


}
