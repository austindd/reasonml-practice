
let map = (f) =>
  fun
  | Some(v) => Some(f(v))
  | None => None;

let andThen = (f: 'a => option('b)) =>
  fun
  | Some(v) => f(v)
  | None => None;

let unwrapUnsafely =
  fun
  | Some(v) => v
  | None => raise(Invalid_argument("Passed `None` to unwrapUnsafely"));

Js.log("Hello, BuckleScript and Reason!");

type fullName = {
  first: string,
  middle: string,
  last: string
}

type phoneNumber = {
  countryCode: string,
  areaCode: string,
  simpleNumber: string,
  extension: string
}

type user = {
  name: fullName,
  email: string,
  phone: phoneNumber,

}


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


