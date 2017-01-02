//
// Created by Joshua Warner on 12/20/16.
//
#include <iostream>
#include <cstring>
#include <unistd.h>

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

const short NUM_PIECES = 16;
const char WHITE = 'W';
const char BLACK = 'B';

class Board;
class Piece {
    Board* chessBoard;
private:
    bool canAttack;
    bool canDefend;
    bool canMove;
    bool dead;
    char pieceChar;
    short xLoc;
    short yLoc;
public:
    friend void setPieces(Piece& pieceArray[]);
    friend void findMove(Piece& pieceArray[], Board * chessBoard);
    friend void placePieces(Piece& pieceArray[], const char color);
    void setChar(const char c);
    char getChar()const;
    bool getDead()const;
    void setXLoc(const short x);
    short getXLoc()const;
    void setYLoc(const short y);
    short getYLoc()const;
};


#endif //CHESS_PIECE_H
