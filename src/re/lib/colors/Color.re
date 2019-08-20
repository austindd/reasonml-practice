module Play = {
  let (<<) = f => x => f(x);
  let (<<<) = (f, g) => x => f(g(x));

  type expr('a) =
    | Base('a)
    | Const(bool)
    | And(list(expr('a)))
    | Or(list(expr('a)))
    | Not(expr('a))
  
  let rec evaluate = (condition, expression) => {
    let eval = expr => evaluate(condition, expr);   
    switch(expression) {
      | Base(ex) => condition(ex)
      | Const(ex) => ex
      | And(exlist) => List.for_all(eval, exlist)
      | Or(exlist) => List.for_all(eval, exlist)
      | Not(ex) => !(eval(ex))
    }
  }

  type tree('a) =
    | Empty 
    | Node('a)
    | Component('a)
    | AbstractNode(tree('a))
    | AbstractNodeList(list(tree('a)));

  

}

type t = 
  | RGB(int, int, int)
  | RGBA(int, int, int, int)
  | HexRGB(string)
  | HexRGBA(string);

let validRGB = (rgbColor: t) => {
  switch(rgbColor){
    | RGB(a, b, c) =>
      (a >= 0 && a <= 255
      && b >= 0 && b <= 255
      && c >= 0 && c <= 255)
      ? Some(RGB(a, b, c))
      : None;
    | _ => None;
  }
};

let validRGBA = (rgbaColor: t) => {
  switch(rgbaColor){
    | RGBA(a, b, c, d) =>
      (a >= 0 && a <= 255
      && b >= 0 && b <= 255
      && c >= 0 && c <= 255
      && d >= 0 && d <= 255)
      ? Some(RGBA(a, b, c, d))
      : None;
    | _ => None;
  }
};

let validColor = (color: t) => {
  switch(color) {
    | RGB(a, b, c) => validRGB(RGB(a, b, c));
    | RGBA(a, b, c, d) => validRGBA(RGBA(a, b, c, d));
    | HexRGB(_) => None;
    | HexRGBA(_) => None;
  }
};


let myColor = (2, 68, 210) -> RGB;
