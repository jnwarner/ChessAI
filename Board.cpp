//
// Created by Joshua Warner on 12/20/16.
//



// I swear to god these aren't magic numbers it's just a lot of shit, let me break it down for a brotha
//
//  ROW 0:  0 1 2 3 4 5 6 7
//  ROW 1:  0 1 2 3 4 5 6 7
//  ROW 2:  0 1 2 3 4 5 6 7
//  ROW 3:  0 1 2 3 4 5 6 7
//  ROW 4:  0 1 2 3 4 5 6 7
//  ROW 5:  0 1 2 3 4 5 6 7
//  ROW 6:  0 1 2 3 4 5 6 7
//  ROW 7:  0 1 2 3 4 5 6 7
//
// i = row
// j = column
//
// EX: boardArray[3][6]
//
// ROW 3: 6

#include "Board.h"

Board::Board()
{
    // clear board
    for (short i = 0; i < BOARD_SIZE; i++) {
        for (short j = 0; j < BOARD_SIZE; j++) {
            boardArray[i][j] = ' ';
        }
    }
}

ostream& operator<<(ostream& o, const Board& b)
{
    for (short i = 0; i < BOARD_SIZE; i++)
    {
        for (short j = 0; j < BOARD_SIZE; j++)
        {
            usleep(50000);
            o << '|' << b.boardArray[i][j];

        }
        o << '|' << endl;
    }
    return o;
}

void Board::placePieces(Piece& pieceArray[], const char color)
{
    if (color == 'B' || color == 'b')
    {
        for (short i = 0; i < NUM_PIECES; i++)
        {
            if (i == 0)
            {
                this->boardArray[0][4] = 'K';
                pieceArray[i].setXLoc(4);
                pieceArray[i].setYLoc(0);
            }
            else if (i == 1)
            {
                this->boardArray[0][3] = 'Q';
                pieceArray[i].setXLoc(3);
                pieceArray[i].setYLoc(0);
            }
            else if (i == 2)
            {
                this->boardArray[0][0] = 'R';
                pieceArray[i].setXLoc(0);
                pieceArray[i].setYLoc(0);
            }
            else if (i == 3)
                this->boardArray[0][7] = 'R';
            else if (i == 4)
                this->boardArray[0][2] = 'B';
            else if (i == 5)
                this->boardArray[0][5] = 'B';
            else if (i == 6)
                this->boardArray[0][1] = 'N';
            else if (i == 7)
                this->boardArray[0][6] = 'N';
            else
            {
                this->boardArray[1][0] = 'P';
                this->boardArray[1][1] = 'P';
                this->boardArray[1][2] = 'P';
                this->boardArray[1][3] = 'P';
                this->boardArray[1][4] = 'P';
                this->boardArray[1][5] = 'P';
                this->boardArray[1][6] = 'P';
                this->boardArray[1][7] = 'P';
            }
        }
    } else if (color == 'W' || color == 'w')
    {
        for (short i = 0; i < NUM_PIECES; i++)
        {
            if (i == 0)
                this->boardArray[7][4] = 'K';
            else if (i == 1)
                this->boardArray[7][3] = 'Q';
            else if (i == 2)
                this->boardArray[7][0] = 'R';
            else if (i == 3)
                this->boardArray[7][7] = 'R';
            else if (i == 4)
                this->boardArray[7][2] = 'B';
            else if (i == 5)
                this->boardArray[7][5] = 'B';
            else if (i == 6)
                this->boardArray[7][1] = 'N';
            else if (i == 7)
                this->boardArray[7][6] = 'N';
            else
            {
                this->boardArray[6][0] = 'P';
                this->boardArray[6][1] = 'P';
                this->boardArray[6][2] = 'P';
                this->boardArray[6][3] = 'P';
                this->boardArray[6][4] = 'P';
                this->boardArray[6][5] = 'P';
                this->boardArray[6][6] = 'P';
                this->boardArray[6][7] = 'P';
            }
        }
    }
    return;
}

char Board::getPiece(const short i, const short j)const
{
    return this->boardArray[i][j];
}