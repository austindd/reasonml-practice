module OptionTools = {

  let lift = x => Some(x);

  let flatten = x =>
    switch(x) {
    | None => None
    | Some(None) => None
    | Some(Some(x)) => Some(x)
    }

  let map = (fn, x) =>
    switch (x) {
    | None => None
    | Some(x) => Some(fn(x))
    };

  let flatmap = (fn, x) => map(fn, x) -> flatten;
 

}
