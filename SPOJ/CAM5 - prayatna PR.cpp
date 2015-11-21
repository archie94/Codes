//accepted
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int dfnumb;
void DFS(int s,int *dfn,vector<int> (&g)[100001])
{
    dfnumb++;
    dfn[s]=dfnumb;
    int i;
    for(i=0;i<g[s].size();i++)
    {
        int u=g[s][i];
        if(dfn[u]==-1)
        DFS(u,dfn,g);
    }
    return;
}
int main()
{
    int t,n,e,i,u,v;
    int dfs[100001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&e);
        if(e==0)
        {
            printf("%d\n",n);
        }
        else
        {

            vector<int> g[100001];
            for(i=0;i<e;i++)
            {
                scanf("%d%d",&u,&v);
                g[u].push_back(v);
                g[v].push_back(u);
            }
            dfnumb=-1;
            for(i=0;i<100001;i++)
            dfs[i]=-1;
            int x=0;
            dfnumb=-1;
            for(i=0;i<n;i++)
            {
                if(dfs[i]==-1)
                {DFS(i,dfs,g);x++;}
            }
            //printf("----------- %d\n",dfnumb);
            /*for(i=0;i<n;i++)
            printf("%d ",dfs[i]);
            printf("\n");*/
            printf("%d\n",(x+(n-dfnumb-1)));
        }
    }
    return 0;
}
