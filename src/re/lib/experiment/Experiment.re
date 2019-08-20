
module Impl = () => {

  module type BASE__M = {
    type t;
    let value: t;
  }

  module type BASE__F = (M: BASE__M) => BASE__M;

  module ApplyModFunc = (F: BASE__F) => (M: BASE__M) => {
    include F(M);
  };

  module Stuff1 = {
    type t = int;
    let value: t = 0;
    type goes = {
      stuff: int
    };
  }

  module Stuff2 = {
    type t = string;
    let value: t = "Stuff2";
    type goes = {
      stuff: string
    };
  }

  module MakeStuff = (M: BASE__M) => {
    include M;
  }

  module ApplyStuff = ApplyModFunc(MakeStuff);

  module Res1 = ApplyStuff(Stuff1);

  module Res2 = ApplyStuff(Stuff2);

  type base_m_list = list((module BASE__M));
  let resList: list((module BASE__M)) = [(module Res1), (module Res2)];

  let showResList = (resList: base_m_list) => {
    List.iter(Js.log, resList);
    ();
  };

  showResList(resList);
}


include Impl();
