module Logic = {

  type t('a) = 
    | Base('a)
    | Const(bool)
    | And(list(t('a)))
    | Or(list(t('a)))
    | Not(t('a));

  type eval('a) = (t('a), (t('a)) => bool) => bool;

  let rec eval = (baseEval, expr: t('a)) => {
    let eval_ = (expr_: t('a)) => eval(baseEval, expr_);
    switch(expr) {
      | Base(base) => baseEval(base);
      | Const(bool) => bool;
      | And(exprs) => List.for_all(eval_, exprs);
      | Or(exprs) => List.exists(eval_, exprs);
      | Not(expr) => !(eval_(expr));
    }
  }

}

let byte1 = [ 0, 1, 0, 1, 0, 1, 0, 1, ];
let byte2 = [ 0, 1, 0, 1, 0, 1, 0, 1, ];
let sixteenBits = [byte1, byte2];

let expr1: Logic.t('a) = And([Const(true), Const(true), Const(false), Const(true)]);

let parser: int => bool = base => (base mod 2 === 0);

let result1: bool = Logic.eval(parser, expr1);

Js.log(result1);



