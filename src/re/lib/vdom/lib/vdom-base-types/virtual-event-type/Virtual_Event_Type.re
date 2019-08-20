
module Impl = () => {

  type eventPhase = | NONE | CAPTURING_PHASE | AT_TARGET | BUBBLING_PHASE;

  type t = {

    // static properties:

    bubbles: bool,
    cancelable: bool,
    cancelBubble: bool,
    composed: bool,
    composedPath: array(Dom.htmlElement),
    currentTarget: Dom.htmlElement,
    defaultPrevented: bool,
    eventPhase: eventPhase,
    isTrusted: bool,
    target: Dom.htmlElement,
    timeStamp: int,
    eventType: string, // altered from "type" to "eventType" since "type" is a reserved keyword.
    
    // methods:

    preventDefault: unit => unit, // SIDE EFFECT: prevents standard event propogation.
    stopImmediatePropogation: unit => unit, // SIDE EFFECT: prevents standard event propogation.
    stopPropogation: unit => unit, // SIDE EFFECT: prevents standard event propogation.

  }



}

include Impl();
