let standardHash = Hashtbl.hash;
let standardEqual: ('input, 'input) => bool = (a, b) => a == b;

type tuple1('a) = ('a);
type tuple2('a, 'b) = ('a, 'b);
type tuple3('a, 'b, 'c) = ('a, 'b, 'c);
type tuple4('a, 'b, 'c, 'd) = ('a, 'b, 'c, 'd);
type tuple5('a, 'b, 'c, 'd, 'e) = ('a, 'b, 'c, 'd, 'e);
type tuple6('a, 'b, 'c, 'd, 'e, 'f) = ('a, 'b, 'c, 'd, 'e, 'f);
type tuple7('a, 'b, 'c, 'd, 'e, 'f, 'g) = ('a, 'b, 'c, 'd, 'e, 'f, 'g);
type tuple8('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h) = ('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h);
type tuple9('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i) = ('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i);
type tuple10('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i, 'j) = ('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i, 'j);


type applyTuple('tuple, 'ret) = ('tuple, 'tuple => 'ret) => 'ret;
let applyTuple1 = ((a), fn) => fn(a);
let applyTuple2 = ((a, b), fn) => fn(a, b);
let applyTuple3 = ((a, b, c), fn) => fn(a, b, c);
let applyTuple4 = ((a, b, c, d), fn) => fn(a, b, c, d);
let applyTuple5 = ((a, b, c, d, e), fn) => fn(a, b, c, d, e);
let applyTuple6 = ((a, b, c, d, e, f), fn) => fn(a, b, c, d, e, f);
let applyTuple7 = ((a, b, c, d, e, f, g), fn) => fn(a, b, c, d, e, f, g);
let applyTuple8 = ((a, b, c, d, e, f, g, h), fn) => fn(a, b, c, d, e, f, g, h);
let applyTuple9 = ((a, b, c, d, e, f, g, h, i), fn) => fn(a, b, c, d, e, f, g, h, i);
let applyTuple10 = ((a, b, c, d, e, f, g, h, i, j), fn) => fn(a, b, c, d, e, f, g, h, i, j);

type arity1('a, 'result) = ('a) => 'result;

type apply(_) =
  | Apply1: apply(applyTuple(('a), 'res))
  | Apply2: apply(applyTuple(('a, 'b), 'res))
  | Apply3: apply(applyTuple(('a, 'b, 'c), 'res))
  | Apply4: apply(applyTuple(('a, 'b, 'c, 'd), 'res))
  | Apply5: apply(applyTuple(('a, 'b, 'c, 'd, 'e), 'res))
  | Apply6: apply(applyTuple(('a, 'b, 'c, 'd, 'e, 'f), 'res))
  | Apply7: apply(applyTuple(('a, 'b, 'c, 'd, 'e, 'f, 'g), 'res))
  | Apply8: apply(applyTuple(('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h), 'res))
  | Apply9: apply(applyTuple(('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i), 'res))
  | Apply10: apply(applyTuple(('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i, 'j), 'res))
  ;

// _________________________________________________

module Impl = () => {

//  type arity('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i, 'j) = 
//    | A1('a)
//    | A2('a, 'b)
//    | A3('a, 'b, 'c)
//    | A4('a, 'b, 'c, 'd)
//    | A5('a, 'b, 'c, 'd, 'e)
//    | A6('a, 'b, 'c, 'd, 'e, 'f)
//    | A7('a, 'b, 'c, 'd, 'e, 'f, 'g)
//    | A8('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h)
//    | A9('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i)
//    | A10('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h, 'i, 'j);

  type arity = | A1 | A2 | A3 | A4 | A5 | A6 | A7 | A8 | A9 | A10;

  let withArity: arity => apply('a) = (arity: arity) => {
    switch(arity) {
    | A1 => Apply1
    | A2 => Apply2
    | A3 => Apply3
    | A4 => Apply4
    | A5 => Apply5
    | A6 => Apply6
    | A7 => Apply7
    | A8 => Apply8
    | A9 => Apply9
    | A10 => Apply10
    }
  }


}

include Impl();

//module Impl = () => {
//
//  module type Config = {
//    type input;
//    type output;
//    let hintSize: int;
//    let hash: input => int;
//    let eq: (input, input) => bool;
//  }
//
//  module Make = (M: Config) => {
//    module Internal = {
//      module Config = { include M };
//      module CacheId = Belt.Id.MakeHashable({
//        type t = M.input;
//        let hash = M.hash;
//        let eq = M.eq;
//      })
//      let cache = Belt.HashMap.make( ~hintSize = M.hintSize, ~id = (module CacheId));
//    }
//    let memoize: (M.input => M.output) => (M.input => M.output) = passedFn => {
//      let memoizedFn = (input) => {
//        let maybeCached = Belt.HashMap.get(Internal.cache, input);
//        switch(maybeCached) {
//          | None => {
//              let output = passedFn(input);
//              Belt.HashMap.set(Internal.cache, input, output);
//              output;
//            }
//          | Some(output) => output;
//        }
//      }
//      memoizedFn;
//    }
//  }
//
//  module Make_A1 = (M: {
//    type input1;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//
//  module Make_A2 = (M: {
//    type input1;
//    type input2;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1, M.input2);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//
//  module Make_A3 = (M: {
//    type input1;
//    type input2;
//    type input3;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1, M.input2, M.input3);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//
//  module Make_A4 = (M: {
//    type input1;
//    type input2;
//    type input3;
//    type input4;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1, M.input2, M.input3, M.input4);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//
//  module Make_A5 = (M: {
//    type input1;
//    type input2;
//    type input3;
//    type input4;
//    type input5;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1, M.input2, M.input3, M.input4, M.input5);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//
//  module Make_A6 = (M: {
//    type input1;
//    type input2;
//    type input3;
//    type input4;
//    type input5;
//    type input6;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1, M.input2, M.input3, M.input4, M.input5, M.input6);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//
//  module Make_A7 = (M: {
//    type input1;
//    type input2;
//    type input3;
//    type input4;
//    type input5;
//    type input6;
//    type input7;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = (M.input1, M.input2, M.input3, M.input4, M.input5, M.input6, M.input7);
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = standardHash;
//    let eq = standardEqual;
//  })
//}
//
//include Impl();
//
//

// ------- WORKING -------

//module Memo = {
//
//  module type Config = {
//    type input;
//    type output;
//    let hintSize: int;
//    let hash: input => int;
//    let eq: (input, input) => bool;
//  }
//
//  module Make = (M: Config) => {
//    module Internal = {
//      module Config = { include M };
//      module CacheId = Belt.Id.MakeHashable({
//        type t = M.input;
//        let hash = M.hash;
//        let eq = M.eq;
//      })
//      let cache = Belt.HashMap.make( ~hintSize = M.hintSize, ~id = (module CacheId));
//    }
//    let memoize: (M.input => M.output) => (M.input => M.output) = passedFn => {
//      let memoizedFn = (input) => {
//        let maybeCached = Belt.HashMap.get(Internal.cache, input);
//        switch(maybeCached) {
//          | None => {
//              let output = passedFn(input);
//              Belt.HashMap.set(Internal.cache, input, output);
//              output;
//            }
//          | Some(output) => output;
//        }
//      }
//      memoizedFn;
//    }
//  }
//
//  module DefaultMake = (M: {
//    type input;
//    type output;
//    let hintSize: int;
//  }) => Make({
//    type input = M.input;
//    type output = M.output;
//    let hintSize = M.hintSize;
//    let hash = Hashtbl.hash;
//    let eq = (inputA: input, inputB: input) => inputA == inputB;
//  })
//
//}
//
//let add = (a, b) => a + b;
//
//module AddMemo = Memo.Make({
//  type input = int;
//  type output = int;
//  let hintSize = 100000;
//  let hash = Hashtbl.hash;
//  let eq = (argA, argB) => argA == argB;
//});
//
//let memoizedAdd = AddMemo.memoize(add(1));


// ------- WORKING -------

//module Memo = {
//  module Make = (T: {
//    type a;
//    type z;
//    let size: int;
//    let eq: (a, a) => bool; 
//    let fn: a => z;
//  }) => {
//    module Cache = {
//      module Id = Belt.Id.MakeHashable({
//        type t = T.a;
//        let hash = Hashtbl.hash; // Using standard OCaml hash function
//        let eq = T.eq;
//      });
//      let hashMap = Belt.HashMap.make(~hintSize = T.size, ~id = (module Id));
//    };
//    let fn = (arg: T.a) => {
//      Js.log(arg);
//      let cache = Cache.hashMap;
//      switch(Belt.HashMap.get(cache, arg)) {
//        | None => {
//            Js.log("Not Found");
//            let res = T.fn(arg);
//            Belt.HashMap.set(cache, arg, res);
//            Js.log(res);
//            res;
//          }
//        | Some(res) => {
//          Js.log2("found", res);
//          Js.log(res);
//          res;
//        }
//      }
//    };
//  }
//}

//module MemoizedFunction = Memo.Make({
//  type a = (int, int);
//  type z = int;
//  let size = 10000;
//  let eq = (a, b) => a === b;
//  let fn: a => z = ((a, b)) => a + b;
//});
//
//let memoFn = MemoizedFunction.fn;
//
//let arr: array(int) = [||];
//let x = ref(0);
//for (i in 0 to 100) {
//  x := memoFn((10, i));
//}
//for (i in 0 to 100) {
//  x := memoFn((10, i));
//}
//
//Js.log(string_of_int(x^));



// ------- WORKING -------

//let memoize1 = (hintCacheSize: int, fn: 'a => 'b) => {
//  let cache = Hashtbl.create(hintCacheSize);
//  let memoizedFn: ('a => 'b) = arg => {
//    let result = switch(Hashtbl.find(cache, arg)) {
//      | exception Not_found => {
//          let x = fn(arg);
//          Hashtbl.add(cache, arg, x);
//          x;
//        }
//      | x => x;
//    }
//    result;
//  }
//  memoizedFn;
//}

//let memoize2 = (hintCacheSize: int, fn: ('a, 'b) => 'c) => {
//  let cache = Hashtbl.create(hintCacheSize);
//  let memoizedFn: ('a, 'b) => 'c = (arg1, arg2) => {
//    switch(Hashtbl.find(cache, (arg1, arg2))) {
//      | exception Not_found => {
//          let x = fn(arg1, arg2)
//          Hashtbl.add(cache, (arg1, arg2), x);
//          x;
//        };
//      | x => x;
//    }
//  } memoizedFn; }

//let add = (a, b) => a + b;
//let add2 = add(2);
//
//let memAdd = memoize2(2000, add);
//let memAdd2 = memoize1(2000, add2);
//
//
//let num1 = ref(0);
//let num2 = ref(0);
//for (i in 0 to 100) {
//  num1 := memAdd2(i);
//  num2 := memAdd(i, i);
//}
//for (i in 0 to 100) {
//  num1 := memAdd2(i);
//  num2 := memAdd(i, i);
//}
//
//module ComponentMap = Map.Make({
//  type t = int;
//  let compare = compare;
//});
