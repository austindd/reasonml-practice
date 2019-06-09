

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
let lift7 = v => (a, b, c, d, e, f, g) => (a(v), b(v), c(v), d(v), e(v), f(v), g(v));
let lift8 = v => (a, b, c, d, e, f, g, h) => (a(v), b(v), c(v), d(v), e(v), f(v), g(v), h(v));
let lift9 = v => (a, b, c, d, e, f, g, h, i) => (a(v), b(v), c(v), d(v), e(v), f(v), g(v), h(v), i(v));
let lift10 = v => (a, b, c, d, e, f, g, h, i, j) => (a(v), b(v), c(v), d(v), e(v), f(v), g(v), h(v), i(v), j(v));

let apply1 = v => a => v(a);
let apply2 = v => (a, b) => (v(a), v(b));
let apply3 = v => (a, b, c) => (v(a), v(b), v(c));
let apply4 = v => (a, b, c, d) => (v(a), v(b), v(c), v(d));
let apply5 = v => (a, b, c, d, e) => (v(a), v(b), v(c), v(d), v(e));
let apply6 = v => (a, b, c, d, e, f) => (v(a), v(b), v(c), v(d), v(e), v(f));
let apply7 = v => (a, b, c, d, e, f, g) => (v(a), v(b), v(c), v(d), v(e), v(f), v(g)); 
let apply8 = v => (a, b, c, d, e, f, g, h) => (v(a), v(b), v(c), v(d), v(e), v(f), v(g), v(h)); 
let apply9 = v => (a, b, c, d, e, f, g, h, i) => (v(a), v(b), v(c), v(d), v(e), v(f), v(g), v(h), v(i)); 
let apply10 = v => (a, b, c, d, e, f, g, h, i, j) => (v(a), v(b), v(c), v(d), v(e), v(f), v(g), v(h), v(i), v(j)); 

let left = (a, _ ) => a;
let right = ( _ , b) => b;

let flip = (a, b) => (b, a);

let b1 = (a, b, c, d) => a(b(c)(d));

let bindOption = (opt: option('p)) => (fn: ('p => 'q)) =>
                  switch(opt) {
                  | None => None
                  | Some(v) => Some(fn(v));
                  }

let liftToOption = (value: 'p) => (fn: (option('p) => option('q))) => fn(Some(value));

let liftNone = (_) => None;

let joinOption = (opt: option('p)) => (fn: ('p => 'q)) => 
                  switch(opt) {
                  | None => None
                  | Some(v) => fn(v)
                  }

