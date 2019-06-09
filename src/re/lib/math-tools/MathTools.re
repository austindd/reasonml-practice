
let nonZeroInt: (int => option(int)) = n => switch (n) {
  | 0 => None
  | n => Some(n)
}


let addInt: (int, int) => int = (a, b) => a + b;
let subtractInt: (int, int) => int = (a, b) => a - b;
let multiplyInt: (int, int) => int = (a, b) => a * b;
let divideInt: (int, int) => option(int) = (a, b) => 
  if (a != 0 && b != 0) {
    Some(a / b);
  } else {
    None;
  };

let addFloat: (float, float) => float = (a, b) => a +. b;
let subtractFloat: (float, float) => float = (a, b) => a -. b;
let multiplyFloat: (float, float) => float = (a, b) => a *. b;
let divideFloat: (float, float) => option(float) = (a, b) => 
  if (a != 0. && b != 0.) {
    Some(a /. b);
  } else None;


