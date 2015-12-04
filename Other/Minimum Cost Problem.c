/*
Minimum Cost Path

Given a cost matrix cost[][] and a position (m, n) in cost[][],
write a function that returns cost of minimum cost path to reach
(m, n) from (0, 0). Each cell of the matrix represents a cost to
traverse through that cell. Total cost of a path to reach (m, n)
is sum of all the costs on that path (including both source and destination).
You can only traverse down, right and diagonally lower cells from a given cell,
i.e., from a given cell (i, j), cells (i+1, j), (i, j+1) and (i+1, j+1) can be traversed.
You may assume that all costs are positive integers.
*/


/*
minCost(m, n) = min (minCost(m-1, n-1), minCost(m-1, n), minCost(m, n-1)) + cost[m][n]
 Follow this for recursive algorithm
 */

/* Dynamic Programming */


 #include <stdio.h>
 #include <stdlib.h>

int min(int x,int y,int z)
{
    if(x<y)
    return (x<z)?x:z;
    else
    return (y<z)?y:z;
}

int main()
{
    int m,n,i,j;
    printf("enter m , n of matrix dim mXn \n");
    scanf("%d%d",&m,&n);
    int **cost,**totCost;
    cost = (int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    cost[i]=(int *)malloc(n*sizeof(int));
    totCost = (int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    totCost[i] = (int *)malloc(n*sizeof(int));

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&cost[i][j]);

    totCost[0][0]=cost[0][0];

    for(i=1;i<m;i++)
    totCost[i][0]=totCost[i-1][0]+cost[i][0];

    for(j=1;j<n;j++)
    totCost[0][j]=totCost[0][j-1]+cost[0][j];

    for(i=1;i<m;i++)
    for(j=1;j<n;j++)
    totCost[i][j]=cost[i][j]+min(totCost[i-1][j-1],totCost[i-1][j],totCost[i][j-1]);

    printf("%d\n",totCost[m-1][n-1]);
    return 0;
}
