/*
Given a positive integer n,
find number of ways to divide n in four parts or represent n
as sum of four positive integers. Here n varies from 0 to 5000.
*/

/* Example :-
Input:  n =  5
Output: 1
There is only one way (1, 1, 1, 2)

Input:  n =  6
Output: 2
There are two ways (1, 1, 1, 3) and
(1, 1, 2, 2)

Input:  n =  8
Output: 5
There are five ways (2, 2, 2, 2), (1, 1, 1, 5),
(1, 1, 3, 3), (1, 1, 2, 4) and (1, 2, 2, 3) */


/* Dynamic Programming */

#include <stdio.h>
#include <string.h>
int dp[5001][5001][5];

/*
countWays() gives the number of ways to split a number 'n'
in 4 parts .
n             => the input number
partsLeft     => the number of parts left , initial value of this is 4
startingPoint => the starting point for the next part to be tried ,
                 initial value is 1
*/
int countWays(int n,int partsLeft,int startingPoint)
{
    // Base cases
    if(partsLeft==0 && n==0)
    return 1;
    if(partsLeft <=0 && n<=0)
    return 0;


    /* if this subcase is already accounted for then just return the
    answer stored in table */
    if(dp[n][startingPoint][partsLeft] != -1)
    return dp[n][startingPoint][partsLeft];


    /*
    start calculating for number of ways for n,partsLeft,startingPoint
    countWays(n, partsLeft, startingPoint) = ∑countWays(n, partsLeft, i)
                          startingPoint <= i <= n
    */
    int i,ans=0;
    for(i=startingPoint;i<=n;i++)
    ans+=countWays(n-i,partsLeft-1,i);

    /* Store the computed answer in table
    and return the result */
    return (dp[n][startingPoint][partsLeft]=ans);
}
int main()
{
    int n;
    scanf("%d",&n);
    memset(dp,-1,sizeof(dp)); // initialise the dp table to all -1
    printf("%d\n",countWays(n,4,1));
    return 0;
}

/*
    The Dynamic Programming approach gives a time complexity of O(n^3)
    A brute force approach would have given O(n^4)
*/
