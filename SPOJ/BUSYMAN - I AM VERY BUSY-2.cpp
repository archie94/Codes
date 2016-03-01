#include <cstdio>
#include <algorithm>
#include <iostream>

struct activity
{
    int start;
    int end;
}interval[100000];
bool cmp(struct activity a, struct activity b)
{
    if(a.end == b.end)
        return a.start<b.start;
    return a.end<b.end;
}
int main()
{
    int t,n,task,last,i;
    scanf("%d",&t);
    while(t--)
    {
        task = 0;
        last = -1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d%d",&interval[i].start,&interval[i].end);

        std::sort(interval,interval + n, cmp);
        for(i=0;i<n;i++)
        {
            if(interval[i].start >= last)
            {
                task++;
                last = interval[i].end;
            }
        }
        printf("%d\n",task);
    }
    return 0;
}
