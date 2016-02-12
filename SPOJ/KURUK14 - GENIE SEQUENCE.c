#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,n,flag,x,a[1001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        flag = 0;
        for(i=0;i<1001;i++)
        a[i] = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x<n)
            {
                if(a[x] == 0)
                a[x] = 1;
                else
                a[n-x-1] = 1;
            }
        }
        for(i=0;i<n;i++)
        if(a[i] == 0)
        flag = 1;
        if(flag)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}
