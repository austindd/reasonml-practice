
module CountryCodes {

/*
  type validCountryCode = (string => option(string))
  let validCountryCode = (code) => {
    if (code == 
          
      "93" /* Afghanistan */
      || "355" /* Albania */
      || "213" /* Algeria */
        
      ) {
      Some(code)
    } else {
      None
    }
    
    // | AmericanSamoa | Andorra | Angola | Anguilla | Antarctica | AntiguaAndBarbuda ;
  }

*/

  type validateCountryCode = option(string) => option(string);
  let validateCountryCode = (codeOption) => {
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
  
