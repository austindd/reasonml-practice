
module CountryCodes {

  type countryCodesArray = array(string);
 
  let countryCodesArray = [|
    "93",
    "355",
  |];


  type optionCountryCode = option(string) => option(string);
  let optionCountryCode = (codeOption) => {
    switch (codeOption) {
    | None => None
    | Some(code) =>
      switch (code) {
      | "93" => Some(code)
      | "355" => Some(code)
      | "213" => Some(code)
      | _ => None
      }
    }
  }
}
  
