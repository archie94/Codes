#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int t;
    int n,start,end,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        vector<pair<int, int> > interval;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&start,&end);
            interval.push_back(make_pair(start, -end));
        }
        sort(interval.begin(), interval.end());
        vector<pair<int, int> > interval2;
        for(i=0;i<n;i++)
        {
            interval[i].second *= -1;
            while(interval2.size()>0 && interval2.back().second >= interval[i].second)
                interval2.pop_back();
            interval2.push_back(interval[i]);
        }
        int task = 0;
        int last = -1;
        for(i=0;i<interval2.size();i++)
        {
            if(interval2[i].first >= last)
            {
                last = interval2[i].second;
                task++;
            }
        }
        printf("%d\n",task);
    }
    return 0;
}
