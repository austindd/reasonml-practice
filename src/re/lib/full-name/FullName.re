
module type FullName = {
  type fullName;
  let make: fullName => fullName;
  let toString: fullName => string;
}

module FullName: FullName = {

  type fullName = {
    first: string,
    second: option(string),
    third: option(string),
    fourth: option(string),
    last: string,
  }

  let make = (n: fullName) => n;

  let toString = (n: fullName) => {
    let result = ""
      |> str => str ++ n.first
      |> str => 
        switch(n.second) {
        | Some(v) => v ++ str
        | None => str
        }
      |> str =>
        switch(n.third) {
        | Some(v) => v ++ str
        | None => str
        }
      |> str =>
        switch(n.fourth) {
        | Some(v) => v ++ str
        | None => str
        }
      |> str => n.last ++ str
    result;
  }
}

