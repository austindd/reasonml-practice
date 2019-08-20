module Impl = (

  T: { type t('a) = 'a constraint 'a = {.. } }

) => {

  type t('a) = T.t('a);

}

include Impl(Props_Type);

