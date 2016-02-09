#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    long t,i=0,borrow,k;
    long numF;
    long a[1001],sum;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld%ld",&borrow,&numF);
        sum = 0;
        for(k=0;k<numF;k++)
        {
            scanf("%ld",&a[k]);
            sum += a[k];
        }
        if(sum>=borrow)
        {
            qsort(a, numF, sizeof(long), cmpfunc);
            sum = 0;
            for(k=numF-1;k>=0;k--)
            {
                sum += a[k];
                if(sum>=borrow)
                break;
            }
            printf("Scenario #%ld:\n%ld\n",i,(numF-k));
        }
        else
        {
            printf("Scenario #%ld:\nimpossible\n",i);
        }
    }
    return 0;
}
