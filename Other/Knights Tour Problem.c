/*
The knight is placed on the first block of an empty board and,
moving according to the rules of chess, must visit each square
exactly once.
*/

/*
Backtracking Algorithm for Knight’s tour


If all squares are visited
    print the solution
Else
   a) Add one of the next moves to solution vector and recursively
   check if this move leads to a solution. (A Knight can make maximum
   eight moves. We choose one of the 8 moves in this step).
   b) If the move chosen in the above step doesn't lead to a solution
   then remove this move from the solution vector and try other
   alternative moves.
   c) If none of the alternatives work then return false (Returning false
   will remove the previously added item in recursion and if false is
   returned by the initial call of recursion then "no solution exists" )
*/










#include <stdio.h>
#include <stdlib.h>
#define n 8

/* A utility function to check if i,j are valid indexes
   for N*N chessboard */
int isSafe(int x,int y,int solMatrix[n][n])
{
    if(x>=0 && x<n && y>=0 && y<n && solMatrix[x][y] == -1)
    return 1;
    return 0;
}


/* A recursive utility function to solve Knight Tour
   problem */
int exploreBoard(int x,int y,int numb,int solMatrix[n][n],int xMove[8],int yMove[8])
{
    int i,nx,ny;
    if(numb == n*n)
    return 1;

    /* Try all next moves from the current coordinate x, y */

    for(i=0;i<8;i++)
    {
        nx = x + xMove[i];
        ny = y + yMove[i];
        if(isSafe(nx,ny,solMatrix) == 1)
        {
            solMatrix[nx][ny] = numb;
            if(exploreBoard(nx,ny,numb+1,solMatrix,xMove,yMove) == 1)
            return 1;
            else
            solMatrix[nx][ny]=-1; // backtracking
        }
    }
    return 0;
}


/* This function solves the Knight Tour problem using
   Backtracking.  This function mainly uses exploreBoard()
   to solve the problem. It returns 0 if no complete
   tour is possible, otherwise return 1 and prints the
   tour.
   Please note that there may be more than one solutions,
   this function prints one of the feasible solutions.  */
int knightTour()
{
    int i,j,solMatrix[n][n];


    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    solMatrix[i][j]=-1;


    /* xMove[] and yMove[] define next move of Knight.
       xMove[] is for next value of x coordinate
       yMove[] is for next value of y coordinate */
    int xMove[8] = {2,1,-1,-2,-2,-1,1,2};
    int yMove[8] = {1,2,2,1,-1,-2,-2,-1};

    solMatrix[0][0]=0; // knight will start from first block

    /* Explore the whole board and print result */
    if(exploreBoard(0,0,1,solMatrix,xMove,yMove) == 0)
    {
        printf("No solution\n");
        return 0;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            printf("%2d  ",solMatrix[i][j]);
            printf("\n");
        }
    }
    return 1;
}



int main()
{
    knightTour();
    return 0;
}
