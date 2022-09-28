#include <iostream>
#include <string.h>

#define BOARD_SIZE 8

enum Piece {
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

enum Color {
    NONE = 0,
    WHITE = 8,
    BLACK = 16
};

int createPiece(int piece, int color) {
  return piece | color;
}

int getColor(int piece) {
  if (piece & BLACK) {
    return BLACK;
  } else if (piece & WHITE) {
    return WHITE;
  } else {
    return NONE;
  }
}

std::string getColorName(int color) {
  if (color == BLACK) {
    return "black";
  } else if (color == WHITE) {
    return "white";
  } else {
    return "none";
  }
}

std::string getPieceName(int piece) {
  switch (piece & 7) {
    case EMPTY:
      return "empty";
    case PAWN:
      return "pawn";
    case KNIGHT:
      return "knight";
    case BISHOP:
      return "bishop";
    case ROOK:
      return "rook";
    case QUEEN:
      return "queen";
    case KING:
      return "king";
    default:
      return "???";
  }
}

bool isColor(int piece, int color) {
  return getColor(piece) == color;
}

std::string pieceToString(int piece) {
  std::string color = getColorName(getColor(piece));
  std::string name = getPieceName(piece);

  return color + " " + name;
}

void initBoard() {
  std::fill(board, board + BOARD_SIZE * BOARD_SIZE, EMPTY);
}

void initBoard(int pieces[BOARD_SIZE * BOARD_SIZE]) {
  std::copy(pieces, pieces + BOARD_SIZE * BOARD_SIZE, board);
}

int* fromFenString(std::string fen) {
  int* arr = new int[BOARD_SIZE * BOARD_SIZE];

  int i = 0;

  while(i < fen.length()) {


    i++;
  }
}

int board[BOARD_SIZE * BOARD_SIZE];

int main()
{
  initBoard();

  return 0;
}