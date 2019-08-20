//module rec VirtualNode: {
//
//  type t;
//
//  module Impl: ( AttributeList: { type t; }, ChildList: { type t; }) => {
//
//    type t =
//      |	Html(AttributeList.t, ChildList.t)
//      |	Base(AttributeList.t, ChildList.t)
//      |	Head(AttributeList.t, ChildList.t)
//      |	Link(AttributeList.t, ChildList.t)
//      |	Meta(AttributeList.t, ChildList.t)
//      |	Style(AttributeList.t, ChildList.t)
//      |	Title(AttributeList.t, ChildList.t)
//      |	Body(AttributeList.t, ChildList.t)
//      |	Address(AttributeList.t, ChildList.t)
//      |	Article(AttributeList.t, ChildList.t)
//      |	Aside(AttributeList.t, ChildList.t)
//      |	Footer(AttributeList.t, ChildList.t)
//      |	Header(AttributeList.t, ChildList.t)
//      |	H1(AttributeList.t, ChildList.t)
//      | H2(AttributeList.t, ChildList.t)
//      | H3(AttributeList.t, ChildList.t)
//      | H4(AttributeList.t, ChildList.t)
//      | H5(AttributeList.t, ChildList.t)
//      | H6(AttributeList.t, ChildList.t)
//      |	Hgroup(AttributeList.t, ChildList.t)
//      |	Nav(AttributeList.t, ChildList.t)
//      |	Section(AttributeList.t, ChildList.t)
//      |	Blockquote(AttributeList.t, ChildList.t)
//      |	Dd(AttributeList.t, ChildList.t)
//      |	Dir(AttributeList.t, ChildList.t)
//      |	Div(AttributeList.t, ChildList.t)
//      |	Dl(AttributeList.t, ChildList.t)
//      |	Dt(AttributeList.t, ChildList.t)
//      |	Figcaption(AttributeList.t, ChildList.t)
//      |	Figure(AttributeList.t, ChildList.t)
//      |	Hr(AttributeList.t, ChildList.t)
//      |	Li(AttributeList.t, ChildList.t)
//      |	Main(AttributeList.t, ChildList.t)
//      |	Ol(AttributeList.t, ChildList.t)
//      |	P(AttributeList.t, ChildList.t)
//      |	Pre(AttributeList.t, ChildList.t)
//      |	Ul(AttributeList.t, ChildList.t)
//      |	A(AttributeList.t, ChildList.t)
//      |	Abbr(AttributeList.t, ChildList.t)
//      |	B(AttributeList.t, ChildList.t)
//      |	Bdi(AttributeList.t, ChildList.t)
//      |	Bdo(AttributeList.t, ChildList.t)
//      |	Br(AttributeList.t, ChildList.t)
//      |	Cite(AttributeList.t, ChildList.t)
//      |	Code(AttributeList.t, ChildList.t)
//      |	Data(AttributeList.t, ChildList.t)
//      |	Dfn(AttributeList.t, ChildList.t)
//      |	Em(AttributeList.t, ChildList.t)
//      |	I(AttributeList.t, ChildList.t)
//      |	Kbd(AttributeList.t, ChildList.t)
//      |	Mark(AttributeList.t, ChildList.t)
//      |	Q(AttributeList.t, ChildList.t)
//      |	Rb(AttributeList.t, ChildList.t)
//      |	Rp(AttributeList.t, ChildList.t)
//      |	Rt(AttributeList.t, ChildList.t)
//      |	Rtc(AttributeList.t, ChildList.t)
//      |	Ruby(AttributeList.t, ChildList.t)
//      |	S(AttributeList.t, ChildList.t)
//      |	Samp(AttributeList.t, ChildList.t)
//      |	Small(AttributeList.t, ChildList.t)
//      |	Span(AttributeList.t, ChildList.t)
//      |	Strong(AttributeList.t, ChildList.t)
//      |	Sub(AttributeList.t, ChildList.t)
//      |	Sup(AttributeList.t, ChildList.t)
//      |	Time(AttributeList.t, ChildList.t)
//      |	Tt(AttributeList.t, ChildList.t)
//      |	U(AttributeList.t, ChildList.t)
//      |	Var(AttributeList.t, ChildList.t)
//      |	Wbr(AttributeList.t, ChildList.t)
//      |	Area(AttributeList.t, ChildList.t)
//      |	Audio(AttributeList.t, ChildList.t)
//      |	Img(AttributeList.t, ChildList.t)
//      |	Map(AttributeList.t, ChildList.t)
//      |	Track(AttributeList.t, ChildList.t)
//      |	Video(AttributeList.t, ChildList.t)
//      |	Applet(AttributeList.t, ChildList.t)
//      |	Embed(AttributeList.t, ChildList.t)
//      |	Iframe(AttributeList.t, ChildList.t)
//      |	Noembed(AttributeList.t, ChildList.t)
//      |	Object(AttributeList.t, ChildList.t)
//      |	Param(AttributeList.t, ChildList.t)
//      |	Picture(AttributeList.t, ChildList.t)
//      |	Source(AttributeList.t, ChildList.t)
//      |	Canvas(AttributeList.t, ChildList.t)
//      |	Noscript(AttributeList.t, ChildList.t)
//      |	Script(AttributeList.t, ChildList.t)
//      |	Del(AttributeList.t, ChildList.t)
//      |	Ins(AttributeList.t, ChildList.t)
//      |	Caption(AttributeList.t, ChildList.t)
//      |	Col(AttributeList.t, ChildList.t)
//      |	Colgroup(AttributeList.t, ChildList.t)
//      |	Table(AttributeList.t, ChildList.t)
//      |	Tbody(AttributeList.t, ChildList.t)
//      |	Td(AttributeList.t, ChildList.t)
//      |	Tfoot(AttributeList.t, ChildList.t)
//      |	Th(AttributeList.t, ChildList.t)
//      |	Thead(AttributeList.t, ChildList.t)
//      |	Tr(AttributeList.t, ChildList.t)
//      |	Button(AttributeList.t, ChildList.t)
//      |	Datalist(AttributeList.t, ChildList.t)
//      |	Fieldset(AttributeList.t, ChildList.t)
//      |	Form(AttributeList.t, ChildList.t)
//      |	Input(AttributeList.t, ChildList.t)
//      |	Label(AttributeList.t, ChildList.t)
//      |	Legend(AttributeList.t, ChildList.t)
//      |	Meter(AttributeList.t, ChildList.t)
//      |	Optgroup(AttributeList.t, ChildList.t)
//      |	Option(AttributeList.t, ChildList.t)
//      |	Output(AttributeList.t, ChildList.t)
//      |	Progress(AttributeList.t, ChildList.t)
//      |	Select(AttributeList.t, ChildList.t)
//      |	Textarea(AttributeList.t, ChildList.t)
//      |	Details(AttributeList.t, ChildList.t)
//      |	Dialog(AttributeList.t, ChildList.t)
//      |	Menu(AttributeList.t, ChildList.t)
//      |	Menuitem(AttributeList.t, ChildList.t)
//      |	Summary(AttributeList.t, ChildList.t)
//      |	Shadow(AttributeList.t, ChildList.t)
//      |	Slot(AttributeList.t, ChildList.t)
//      |	Template(AttributeList.t, ChildList.t);
//  };
//
//} = {
//
//  module Impl = ( AttributeList: { type t; }, ChildList: { type t; }) => {
//
//    type t =
//      |	Html(AttributeList.t, ChildList.t)
//      |	Base(AttributeList.t, ChildList.t)
//      |	Head(AttributeList.t, ChildList.t)
//      |	Link(AttributeList.t, ChildList.t)
//      |	Meta(AttributeList.t, ChildList.t)
//      |	Style(AttributeList.t, ChildList.t)
//      |	Title(AttributeList.t, ChildList.t)
//      |	Body(AttributeList.t, ChildList.t)
//      |	Address(AttributeList.t, ChildList.t)
//      |	Article(AttributeList.t, ChildList.t)
//      |	Aside(AttributeList.t, ChildList.t)
//      |	Footer(AttributeList.t, ChildList.t)
//      |	Header(AttributeList.t, ChildList.t)
//      |	H1(AttributeList.t, ChildList.t)
//      | H2(AttributeList.t, ChildList.t)
//      | H3(AttributeList.t, ChildList.t)
//      | H4(AttributeList.t, ChildList.t)
//      | H5(AttributeList.t, ChildList.t)
//      | H6(AttributeList.t, ChildList.t)
//      |	Hgroup(AttributeList.t, ChildList.t)
//      |	Nav(AttributeList.t, ChildList.t)
//      |	Section(AttributeList.t, ChildList.t)
//      |	Blockquote(AttributeList.t, ChildList.t)
//      |	Dd(AttributeList.t, ChildList.t)
//      |	Dir(AttributeList.t, ChildList.t)
//      |	Div(AttributeList.t, ChildList.t)
//      |	Dl(AttributeList.t, ChildList.t)
//      |	Dt(AttributeList.t, ChildList.t)
//      |	Figcaption(AttributeList.t, ChildList.t)
//      |	Figure(AttributeList.t, ChildList.t)
//      |	Hr(AttributeList.t, ChildList.t)
//      |	Li(AttributeList.t, ChildList.t)
//      |	Main(AttributeList.t, ChildList.t)
//      |	Ol(AttributeList.t, ChildList.t)
//      |	P(AttributeList.t, ChildList.t)
//      |	Pre(AttributeList.t, ChildList.t)
//      |	Ul(AttributeList.t, ChildList.t)
//      |	A(AttributeList.t, ChildList.t)
//      |	Abbr(AttributeList.t, ChildList.t)
//      |	B(AttributeList.t, ChildList.t)
//      |	Bdi(AttributeList.t, ChildList.t)
//      |	Bdo(AttributeList.t, ChildList.t)
//      |	Br(AttributeList.t, ChildList.t)
//      |	Cite(AttributeList.t, ChildList.t)
//      |	Code(AttributeList.t, ChildList.t)
//      |	Data(AttributeList.t, ChildList.t)
//      |	Dfn(AttributeList.t, ChildList.t)
//      |	Em(AttributeList.t, ChildList.t)
//      |	I(AttributeList.t, ChildList.t)
//      |	Kbd(AttributeList.t, ChildList.t)
//      |	Mark(AttributeList.t, ChildList.t)
//      |	Q(AttributeList.t, ChildList.t)
//      |	Rb(AttributeList.t, ChildList.t)
//      |	Rp(AttributeList.t, ChildList.t)
//      |	Rt(AttributeList.t, ChildList.t)
//      |	Rtc(AttributeList.t, ChildList.t)
//      |	Ruby(AttributeList.t, ChildList.t)
//      |	S(AttributeList.t, ChildList.t)
//      |	Samp(AttributeList.t, ChildList.t)
//      |	Small(AttributeList.t, ChildList.t)
//      |	Span(AttributeList.t, ChildList.t)
//      |	Strong(AttributeList.t, ChildList.t)
//      |	Sub(AttributeList.t, ChildList.t)
//      |	Sup(AttributeList.t, ChildList.t)
//      |	Time(AttributeList.t, ChildList.t)
//      |	Tt(AttributeList.t, ChildList.t)
//      |	U(AttributeList.t, ChildList.t)
//      |	Var(AttributeList.t, ChildList.t)
//      |	Wbr(AttributeList.t, ChildList.t)
//      |	Area(AttributeList.t, ChildList.t)
//      |	Audio(AttributeList.t, ChildList.t)
//      |	Img(AttributeList.t, ChildList.t)
//      |	Map(AttributeList.t, ChildList.t)
//      |	Track(AttributeList.t, ChildList.t)
//      |	Video(AttributeList.t, ChildList.t)
//      |	Applet(AttributeList.t, ChildList.t)
//      |	Embed(AttributeList.t, ChildList.t)
//      |	Iframe(AttributeList.t, ChildList.t)
//      |	Noembed(AttributeList.t, ChildList.t)
//      |	Object(AttributeList.t, ChildList.t)
//      |	Param(AttributeList.t, ChildList.t)
//      |	Picture(AttributeList.t, ChildList.t)
//      |	Source(AttributeList.t, ChildList.t)
//      |	Canvas(AttributeList.t, ChildList.t)
//      |	Noscript(AttributeList.t, ChildList.t)
//      |	Script(AttributeList.t, ChildList.t)
//      |	Del(AttributeList.t, ChildList.t)
//      |	Ins(AttributeList.t, ChildList.t)
//      |	Caption(AttributeList.t, ChildList.t)
//      |	Col(AttributeList.t, ChildList.t)
//      |	Colgroup(AttributeList.t, ChildList.t)
//      |	Table(AttributeList.t, ChildList.t)
//      |	Tbody(AttributeList.t, ChildList.t)
//      |	Td(AttributeList.t, ChildList.t)
//      |	Tfoot(AttributeList.t, ChildList.t)
//      |	Th(AttributeList.t, ChildList.t)
//      |	Thead(AttributeList.t, ChildList.t)
//      |	Tr(AttributeList.t, ChildList.t)
//      |	Button(AttributeList.t, ChildList.t)
//      |	Datalist(AttributeList.t, ChildList.t)
//      |	Fieldset(AttributeList.t, ChildList.t)
//      |	Form(AttributeList.t, ChildList.t)
//      |	Input(AttributeList.t, ChildList.t)
//      |	Label(AttributeList.t, ChildList.t)
//      |	Legend(AttributeList.t, ChildList.t)
//      |	Meter(AttributeList.t, ChildList.t)
//      |	Optgroup(AttributeList.t, ChildList.t)
//      |	Option(AttributeList.t, ChildList.t)
//      |	Output(AttributeList.t, ChildList.t)
//      |	Progress(AttributeList.t, ChildList.t)
//      |	Select(AttributeList.t, ChildList.t)
//      |	Textarea(AttributeList.t, ChildList.t)
//      |	Details(AttributeList.t, ChildList.t)
//      |	Dialog(AttributeList.t, ChildList.t)
//      |	Menu(AttributeList.t, ChildList.t)
//      |	Menuitem(AttributeList.t, ChildList.t)
//      |	Summary(AttributeList.t, ChildList.t)
//      |	Shadow(AttributeList.t, ChildList.t)
//      |	Slot(AttributeList.t, ChildList.t)
//      |	Template(AttributeList.t, ChildList.t);
//
//  }
//  include Impl(AttributeList, ChildList);
//} 
//
//and ChildList: {
//  type t;
//  module Impl: (VirtualNode: { type t; }) => {
//    type t =
//      | Children(list(VirtualNode.t))
//      | Empty;
//    let map: (VirtualNode.t => VirtualNode.t, t) => t;
//  }
//} = {
//  module Impl = (VirtualNode: { type t; }) => {
//    type t =
//      | Children(list(VirtualNode.t))
//      | Empty;
//    let map: ((VirtualNode.t => VirtualNode.t), t) => t = (fn, childList) => {
//      switch(childList) {
//        | Children(c) => Children(List.map(fn, c))
//        | Empty => Empty;
//      }
//    };
//  };
//  include Impl(VirtualNode);
//} 
//
//and AttributeList: {
//  type t;
//  module Impl: (Attribute: { type t; }) => {
//    type t = 
//      | Attrs(list(Attribute.t))
//      | Empty;
//    let map: (Attribute.t => Attribute.t, t) => t;
//  }
//} = {
//  module Impl = (Attribute: { type t; }) => {
//    type t = 
//      | Attrs(list(Attribute.t))
//      | Empty;
//    let map: ((Attribute.t => Attribute.t), t) => t = (fn, attrList) => {
//      switch(attrList) {
//        | Attrs(attrs) => Attrs(List.map(fn, attrs))
//        | Empty => Empty
//      }
//    }
//  }
//  include Impl(Attribute);
//};
//
//
////module rec VirtualNode_Impl: { type t; } = VirtualNode_Make(AttributeList_Impl, ChildList_Impl)
////
////and AttributeList_Impl: { type t; } = AttributeList_Make(Attribute)
////
////and ChildList_Impl: { type t; } = ChildList_Make(VirtualNode_Impl);
//
//
//

