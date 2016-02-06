#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int t,n,men[1001],women[1001],i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&men[i]);
        for(i=0;i<n;i++)
        scanf("%d",&women[i]);

        qsort(men, n, sizeof(int), cmpfunc);
        qsort(women, n, sizeof(int), cmpfunc);

        long long res = 0;
        for(i=0;i<n;i++)
        res += (men[i]*women[i]);

        printf("%lld\n",res);
    }
    return 0;
}
