open Relude.Globals;
open GlobalInterface;

  module Tile = {
    type position = | A1 | A2 | A3 | B1 | B2 | B3 | C1 | C2 | C3;
    type state = | Empty | X | O;
    type t = (position, state);
  }

  module Board = {

    type t = {
      a1: Tile.t, a2: Tile.t, a3: Tile.t,
      b1: Tile.t, b2: Tile.t, b3: Tile.t,
      c1: Tile.t, c2: Tile.t, c3: Tile.t,
    };

    type vector = (Tile.t, Tile.t, Tile.t);

    let empty: unit => t = () => {
      a1: (A1, Empty), a2: (A2, Empty), a3: (A3, Empty),
      b1: (B1, Empty), b2: (B2, Empty), b3: (B3, Empty),
      c1: (C1, Empty), c2: (C2, Empty), c3: (C3, Empty),
    };

    let make = (board: t) => {
      a1: board.a1, a2: board.a2, a3: board.a3,
      b1: board.b1, b2: board.b2, b3: board.b3,
      c1: board.c1, c2: board.c2, c3: board.c3,
    }

    include SHOW.Default({type nonrec t = t});

  }
  module HtmlInterface = HtmlInterface;
  
  module UserInterface = {

    type t = unit;

    module Impl = (T: { type t; }) => {
      type t = T.t;
      type dataInput;
      type dataOutput;
    };

    module Make = (T: { type t; }) => {
      include Impl(T);
    };

    // include Impl({ type t; })
  }

  module Game = {

    type player = PlayerX | PlayerO;

    type finalResult = WinnerX | WinnerO | TieGame;

    type gameStatus = InProgress(player) | GameOver(finalResult);

    type t = {
      data: Board.t,
      userInterface: UserInterface.t,
      gameStatus: gameStatus,
    };

    let newGame = () => {
      Random.self_init();
      let randomTurn = Random.bool() === true ? PlayerX : PlayerO;
      {
        data: Board.empty(),
        userInterface: (),
        gameStatus: InProgress(randomTurn)
      }
    }

    include SHOW.Default({ type nonrec t = t; });
  }

module TicTacToe = {
  module Tile = Tile;
  module Board = Board;
  module UserInterface = UserInterface;
  module Game = Game;
};

open TicTacToe;



let main = IO.suspendWithVoid(Game.newGame)
  |> IO.bitap(Js.log, Js.log)

  // |> IO.bimap(Js.log, Js.log)
  




