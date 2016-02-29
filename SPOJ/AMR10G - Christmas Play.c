#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int t,k,n,i;
    long long h[20001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%lld",&h[i]);

        qsort( h, n, sizeof(long long), cmpfunc);
        long long d1 = 2e9;
        for(i=0;i<=(n-k);i++)
        {
            d1 = d1<(h[i+k-1]-h[i])?d1:(h[i+k-1]-h[i]);
        }
        printf("%lld\n",d1);
    }
    return 0;
}
