#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <queue>
#define INF 10000000

using namespace std;
struct point
{
    int x;
    int y;
    int dist;
    point(int X,int Y, int Dist)
    {
        x = X;
        y = Y;
        dist = Dist;
    }
};

int main()
{
    /*
    Store coordinates of cell which is white, ie, 1
    Perform bfs from these points for the whole matrix
    at each cell take the minimum dist
    */
    int t,n,m,i,j;
    char x[200];
    int d[200][200];
    queue<point> q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        //
        for(i=0;i<n;i++)
        {
            fflush(stdin);
            scanf("%s",&x);
            for(j=0;j<m;j++)
            {
                d[i][j] = INF;
                if(x[j] == '1')
                {
                    //printf("%d%d\n",i,j);
                    q.push(point(i,j,0));
                }
            }
        }

        while(!q.empty())
        {
            point p = q.front();
            q.pop();
            if(p.x < 0 || p.x >= n || p.y < 0 || p.y >= m)
                continue;
            if(d[p.x][p.y] <= p.dist)
                continue;
            d[p.x][p.y] = p.dist;

            q.push(point(p.x-1,p.y,p.dist+1));
            q.push(point(p.x,p.y-1,p.dist+1));
            q.push(point(p.x+1,p.y,p.dist+1));
            q.push(point(p.x,p.y+1,p.dist+1));
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                printf("%d ",d[i][j]);
            printf("\n");
        }
    }
    return 0;
}
