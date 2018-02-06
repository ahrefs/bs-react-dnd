type hoc = ReasonReact.reactClass => ReasonReact.reactClass;

type wrapper =
  [@bs.meth] (ReasonReact.reactElement => ReasonReact.reactElement);

type connect = {
  .
  "dragSource": [@bs.meth] (unit => wrapper),
  "dropTarget": [@bs.meth] (unit => wrapper)
};

type dndItem = {. "name": string};