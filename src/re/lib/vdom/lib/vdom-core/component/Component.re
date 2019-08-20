module Impl = {

  module Simple_ = (T: {
    type virtualNode;
  }) => {
    type t('component) = {
      .. 
      render: unit => T.virtualNode
    } as 'component;
  };

  module WithProps_ = (T: {
    type virtualNode;
    type props;
  }) => {
    type t('component) = {
      ..
      render: T.props => T.virtualNode
    } as 'component;
  }

  module T = {
    type vnode;
    type props('a) = 
      | Props('a)
      | Nil;
    type effect('a) =
      | Effect('a)
      | Nil;
    type component('a) = unit => vnode;
  }

}

module T = Impl.T;

type t('effect, 'props, 'component) =
  (T.effect('effect), T.props('props), T.component('component));

type withProps('props, 'x);
