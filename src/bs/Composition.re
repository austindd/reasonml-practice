let _lift1 = (v) => (z: 'a => 'b) => z(v);

let _lift2 = (v) => (z: 'a => 'b) => z(_lift1 (v));

let _lift3 = (v) => (z: 'a => 'b) => z(_lift2(v));
let _lift4 = (v) => (z: 'a => 'b) => z(_lift3(v));
let _lift5 = (v) => (z: 'a => 'b) => z(_lift4(v));
let _lift6 = (v) => (z: 'a => 'b) => z(_lift5(v));
let _lift7 = (v) => (z: 'a => 'b) => z(_lift6(v));

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

let left = a => b => a;
let right = a => b => b;

let b1 = a => b => c => d => a(b(c)(d));

let flip = a => b => b => a;
