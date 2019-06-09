module PhoneNumber {
  /*

   TODO: provide types for all components of phoneNumber *outside* of the
   phoneNumber record. It is not recognizing the signature of 'make'.

   */


  open Composition;
  open StringTools;

  // Validate does nothing for now;
  let validate = x => Some(x);
  let validPhoneNumber: string => option(string) = p => {
    if (String.length(p) > 18) None
      else Some(p);
  }

  type phoneNumber = {
    countryCode: option(string),
    areaCode: string,
    prefix: string,
    lineNumber: string,
    extension: option(string),
  }

  let optionAppendString1 = bindOption(appendString1);
  let optionValidate = bindOption(validate);
  

  let make = countryCode => areaCode => prefix => lineNumber => extension => {
    let baseStr = "";
      Some(baseStr)
      -> optionValidate(countryCode)
      -> bindOption(validate(areaCode))
      -> bindOption(validate(prefix))
      -> bindOption(validate(lineNumber))
      -> bindOption(validate(extension))
      -> validPhoneNumber

  }

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

