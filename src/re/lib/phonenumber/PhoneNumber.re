module PhoneNumber = {


  module CC = CountryCodes;


  type phoneNumber = {
    countryCode: string,
    areaCode: string,
    prefix: string,
    lineNumber: string,
    extension: string
  }

  let validateCountryCode = (countryCode: option(string)) => {
      switch(countryCode) {
      | None => None
      | Some(code) => Some(code); // TODO: test countryCode for valid strings
    }
  }

  let makePhoneNumber = (
    countryCode: option(string),
    areaCode: string,
    prefix: string,
    lineNumber: string,
    extension: string
  ) : phoneNumber => {
    switch (countryCode) {
    | None => raise(Invalid_argument("Invalid Country Code"))
    | Some(cc) => {
        countryCode: cc,
        areaCode: areaCode,
        prefix: prefix,
        lineNumber: lineNumber,
        extension: extension
      }
    }
  }
  
}
