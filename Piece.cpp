//
// Created by Joshua Warner on 12/20/16.
//

#include "Piece.h"

void setPieces(Piece& pieceArray[])
{
    for (short i = 0; i < NUM_PIECES; i++)
    {
        if (i == 0)
            pieceArray[i].setChar('K');
        else if (i == 1)
            pieceArray[i].setChar('Q');
        else if (i == 2 || i == 3)
            pieceArray[i].setChar('R');
        else if (i == 4 || i == 5)
            pieceArray[i].setChar('B');
        else if (i == 6 || i == 7)
            pieceArray[i].setChar('N');
        else
            pieceArray[i].setChar('P');
    }
    return;
}

void findMove(Piece& pieceArray[], Board * chessBoard)
{
    for (short i = 0; i < NUM_PIECES; i++)
    {
        if (!pieceArray[i].getDead())
        {
            if (pieceArray[i].getChar() == 'K')
            {
                do
                {

                } while
            } else if (pieceArray[i].getChar() == 'Q')
            {

            } else if (pieceArray[i].getChar() == 'R')
            {

            } else if (pieceArray[i].getChar() == 'B')
            {

            } else if (pieceArray[i].getChar() == 'N')
            {

            } else
            {

            }
        }
    }
    return;
}

void Piece::setChar(const char c)
{
    this->pieceChar = c;
    return;
}

char Piece::getChar() const
{
    return this->pieceChar;
}

bool Piece::getDead() const
{
    return this->dead;
}
void Piece::setXLoc(const short x)
{
    this->xLoc = x;
    return
}
short Piece::getXLoc()const
{
    return this->xLoc;
}
void Piece::setYLoc(const short y)
{
    this->yLoc = y;
    return;
}
short Piece::getYLoc()const
{
    return this->yLoc;
}
