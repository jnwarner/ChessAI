//
// Created by Joshua Warner on 12/20/16.
//

#include "Piece.h"

using namespace std;

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

const short BOARD_SIZE = 8;

class Board {
private:
    char boardArray[BOARD_SIZE][BOARD_SIZE];
public:
    Board();
    friend ostream& operator<<(ostream& o, const Board& b);
    void placePieces(Piece& pieceArray[], const char color);
    char getPiece(const short i, const short j)const;
};


#endif //CHESS_BOARD_H
