module type PhoneNumber = {
  type phonNumber = {
    countryCode: option(string),
    areaCode: string,
    prefix: string,
    lineNumber: string,
    extension: option(string),
  };
  type make = countryCode => areaCode => prefix => lineNumber => extension => phoneNumber;
  type toString = phoneNumber => string;
}

module PhoneNumber: PhoneNumber {
  /*

   TODO: provide types for all components of phoneNumber *outside* of the
   phoneNumber record. It is not recognizing the signature of 'make'.

   */

  let phoneNumber = {
    countryCode: option(string),
    areaCode: string,
    prefix: string,
    lineNumber: string,
    extension: option(string),
  }

  let make = countryCode => areaCode => prefix => lineNumber => extension = phoneNumber;

  let toString = (p: phoneNumber) => {
    let result = ""  
      |> str =>
        switch(p.countryCode) {
        | None => "1";
        | Some(v) => "." ++ v;
        }
      |> str => str ++ "." ++ p.areaCode
      |> str => str ++ "." ++ p.prefix
      |> str => str ++ "." ++ p.lineNumber
      |> str =>
        switch(p.extension) {
        | None => str;
        | Some(v) => str ++ "." ++ v
        }
      |> str => str
      result;
  }
}

