/*Optimal Strategy for a Game */

/*Problem statement: Consider a row of n coins of values v1 . . . vn, where n is even. We play a game against an opponent by alternating turns. In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin. Determine the maximum possible amount of money we can definitely win if we move first.

Note: The opponent is as clever as the user.

Let us understand the problem with few examples:

    1. 5, 3, 7, 10 : The user collects maximum value as 15(10 + 5)

    2. 8, 15, 3, 7 : The user collects maximum value as 22(7 + 15)

Does choosing the best at each move give an optimal solution?

No. In the second example, this is how the game can finish:

1.
…….User chooses 8.
…….Opponent chooses 15.
…….User chooses 7.
…….Opponent chooses 3.
Total value collected by user is 15(8 + 7)

2.
…….User chooses 7.
…….Opponent chooses 8.
…….User chooses 15.
…….Opponent chooses 3.
Total value collected by user is 22(7 + 15)

So if the user follows the second game state, maximum value can be collected although the first move is not the best.

There are two choices:
1. The user chooses the ith coin with value Vi: The opponent either chooses (i+1)th coin or jth coin. The opponent intends to choose the coin which leaves the user with minimum value.
i.e. The user can collect the value Vi + min(F(i+2, j), F(i+1, j-1) )

2. The user chooses the jth coin with value Vj: The opponent either chooses ith coin or (j-1)th coin. The opponent intends to choose the coin which leaves the user with minimum value.
i.e. The user can collect the value Vj + min(F(i+1, j-1), F(i, j-2) )

Following is recursive solution that is based on above two choices. We take the maximum of two choices.

F(i, j)  represents the maximum value the user can collect from
         i'th coin to j'th coin.

    F(i, j)  = Max(Vi + min(F(i+2, j), F(i+1, j-1) ),
                   Vj + min(F(i+1, j-1), F(i, j-2) ))
Base Cases
    F(i, j)  = Vi           If j == i
    F(i, j)  = max(Vi, Vj)  If j == i+1
*/
/* Dynamic Programming */

#include <stdio.h>
#include <stdlib.h>

int min(int a,int b)
{
    return a>b?b:a;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int *a,n,i,j,k,**dp;
    printf("enter no of numbers and then numbers\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    dp=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++)
    dp[i]=(int *)malloc(n*sizeof(int));

    // Fill table using above recursive formula. Note that the table
    // is filled in diagonal fashion (similar to http://goo.gl/PQqoS),
    // from diagonal elements to table[0][n-1] which is the result.
    for(i=0;i<n;i++)
    {
        for(k=0,j=i;j<n;j++,k++)
        {
            // Here x is value of F(i+2, j), y is F(i+1, j-1) and
            // z is F(i, j-2) in above recursive formula
            int x = ((k+2)<=j)?dp[k+2][j]:0;
            int y = ((k+1)<=(j-1))?dp[k+1][j-1]:0;
            int z = (k<=(j-2))?dp[k][j-2]:0;
            dp[k][j] = max(a[k] + min(x,y),a[j] + min(y,z));
        }
    }
    printf("%d\n",dp[0][n-1]);
    return 0;
}
