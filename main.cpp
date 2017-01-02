// include chain is as follows:
// Board.h -> Piece.h -> main.cpp
// Board.h holds all includes necessary, as it is included in every chained file

#include "Board.h"

using namespace std;

int main()
{
    Board chessBoard;               // Chess Board object
    Piece whitePieces[NUM_PIECES];  // Array of white pieces in descending order
    Piece blackPieces[NUM_PIECES];  // Array of black pieces in descending order

    // Set chars for pieces
    setPieces(whitePieces);
    setPieces(blackPieces);

    // Output board before setting
    cout << chessBoard;

    // Place Pieces
    chessBoard.placePieces(BLACK);
    chessBoard.placePieces(WHITE);

    cout << chessBoard;

    findMove(whitePieces, &chessBoard);



    return 0;
}