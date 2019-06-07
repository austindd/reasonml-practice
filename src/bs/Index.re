
let mapOption = (f) => (v) =>
  switch (v) {
    | Some(v) => Some(f(v))
    | None => None;
  }

let andThen = (f: 'a => option('b)) =>
  fun
  | Some(v) => f(v)
  | None => None;

let unwrapUnsafely =
  fun
  | Some(v) => v
  | None => raise(Invalid_argument("Passed `None` to unwrapUnsafely"));

Js.log("Hello, BuckleScript and Reason!");



let makeString = (a: string, b: string, c: string) => a ++ b ++ c;

let test1 = "Hi, "
let test2 = "my name is "
let test3 = "Austin"

Js.log(makeString(test1, test2, test3))

 


let makePhoneNumber = (countryCode: string, areaCode: string, number: string, extension: string) =>
  countryCode ++ areaCode ++ number ++ extension
  


open Webapi.Dom;

let documentBody = document
  |> Document.asHtmlDocument
  |> andThen(HtmlDocument.body)
 

Js.log(documentBody);

let appRoot = document
  |> Document.createElement("div")
  |> Element.parentElement


let header = document
  |> Document.createElement("h1");




    


 



