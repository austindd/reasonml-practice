module type User = {
  type user;
  type name = FullName;
  type email = string;
  type phone = PhoneNumber;
  type make = unit => user;
}

