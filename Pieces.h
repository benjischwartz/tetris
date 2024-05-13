#include "BoardData.h"

class Pieces
{
public:
    int GetBlockType (int pPiece, int pRotation, int pX, int pY);
    int GetXInitialPosition (int pPiece, int pRotation);
    int GetYInitialPosition (int pPiece, int pRotation);
};

// The 3 methods that you can see in the header returns some information that we will need later. Their implementation is trivial:

/*
======================================
Return the type of a block (0 = no-block, 1 = normal block, 2 = pivot block)

Parameters:

>> pPiece: Piece to draw
>> pRotation: 1 of the 4 possible rotations
>> pX: Horizontal position in blocks
>> pY: Vertical position in blocks
======================================
*/
inline int Pieces::GetBlockType (int pPiece, int pRotation, int pX, int pY)
{
    return tetris::mPieces[pPiece][pRotation][pX][pY];
}

/*
======================================
Returns the horizontal displacement of the piece that has to be applied in order to create it in the
correct position.

Parameters:

>> pPiece: Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
inline int Pieces::GetXInitialPosition (int pPiece, int pRotation)
{
    return tetris::mPiecesInitialPosition[pPiece][pRotation][0];
}

/*
======================================
Returns the vertical displacement of the piece that has to be applied in order to create it in the
correct position.

Parameters:

>> pPiece: Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
inline int Pieces::GetYInitialPosition (int pPiece, int pRotation)
{
    return tetris::mPiecesInitialPosition[pPiece][pRotation][1];
}
