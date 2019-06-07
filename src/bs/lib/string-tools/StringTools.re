module StringTools = {
  
  let appendString1 = (a: string, b: string) => a ++ b;
  let appendString2 = (a: string, b: string, c: string) => a ++ b ++ c;
  let appendString3 = (a: string, b: string, c: string, d: string) => a ++ b ++ c ++ d;
  let appendString4 = (a: string, b: string, c: string, d: string, e: string) => a ++ b ++ c ++ d ++ e;
  let appendString5 = (a: string, b: string, c: string, d: string, e: string, f: string) => a ++ b ++ c ++ d ++ e ++ f;
  let appendString6 = (a: string, b: string, c: string, d: string, e: string, f: string, g: string) => a ++ b ++ c ++ d ++ e ++ f ++ g;
  let appendString7 = (a: string, b: string, c: string, d: string, e: string, f: string, g: string, h: string) => a ++ b ++ c ++ d ++ e ++ f ++ g ++ h;
  let appendString8 = (a: string, b: string, c: string, d: string, e: string, f: string, g: string, h: string, i: string) => a ++ b ++ c ++ d ++ e ++ f ++ g ++ h ++ i;
  let appendString9 = (a: string, b: string, c: string, d: string, e: string, f: string, g: string, h: string, i: string, j: string) => a ++ b ++ c ++ d ++ e ++ f ++ g ++ h ++ i ++ j;
  let appendString10 = (a: string, b: string, c: string, d: string, e: string, f: string, g: string, h: string, i: string, j: string, k: string) => a ++ b ++ c ++ d ++ e ++ f ++ g ++ h ++ i ++ j ++ k;

// Append characters to a string

  let appendChar1 = (a: string, b: char) =>
    a ++ String.make(1, b);

  let appendChar2 = (a: string, b: char, c: char) =>
    a ++ String.make(1, b) ++ String.make(1, c);

  let appendChar3 = (a: string, b: char, c: char, d: char) =>
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d);

  let appendChar4 = (a: string, b: char, c: char, d: char, e: char) => 
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e);

  let appendChar5 = (a: string, b: char, c: char, d: char, e: char, f: char) =>
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e) ++ String.make(1, f);

  let appendChar6 = (a: string, b: char, c: char, d: char, e: char, f: char, g: char) => 
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e) ++ String.make(1, f) ++ String.make(1, g);

  let appendChar7 = (a: string, b: char, c: char, d: char, e: char, f: char, g: char, h: char) => 
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e) ++ String.make(1, f) ++ String.make(1, g) ++ String.make(1, h);

  let appendChar8 = (a: string, b: char, c: char, d: char, e: char, f: char, g: char, h: char, i: char) => 
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e) ++ String.make(1, f) ++ String.make(1, g) ++ String.make(1, h) ++ String.make(1, i);
  
  let appendChar9 = (a: string, b: char, c: char, d: char, e: char, f: char, g: char, h: char, i: char, j: char) => 
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e) ++ String.make(1, f) ++ String.make(1, g) ++ String.make(1, h) ++ String.make(1, i) ++ String.make(1, j);
  
  let appendChar10 = (a: string, b: char, c: char, d: char, e: char, f: char, g: char, h: char, i: char, j: char, k: char) => 
    a ++ String.make(1, b) ++ String.make(1, c) ++ String.make(1, d) ++ String.make(1, e) ++ String.make(1, f) ++ String.make(1, g) ++ String.make(1, h) ++ String.make(1, i) ++ String.make(1, j) ++ String.make(1, k);

  

}


