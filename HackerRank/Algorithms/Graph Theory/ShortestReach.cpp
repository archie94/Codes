#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int t;
    long long n,m,u,v,s,i;
    vector<long long> g[1002];
    long long dist[1002];
    cin>>t;
    while(t--)
    {
	for(i=0;i<1002;i++) {
		g[i].clear();
	}

        cin>>n;
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>u;
            cin>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(i=1;i<1002;i++)
        dist[i]=-1;
        cin>>s;
        queue<int> q;
        q.push(s);
        dist[s]=0;
        while(!q.empty())
        {
            u=q.front();
            q.pop();
            long long size=g[u].size();
            for(i=0;i<size;i++)
            {
                v=g[u][i];
                if(dist[v]==-1)
                {
                    dist[v]=dist[u]+1;
                    q.push(v);
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i!=s)
            {
                if(dist[i]!=-1)
                cout<<(6*dist[i])<<" ";
                else
                cout<<dist[i]<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}
