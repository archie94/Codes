#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    long long third, thirdLast, sum, n, diff, i, first;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&third,&thirdLast,&sum);
        n = 2 * sum / ( third + thirdLast);
        diff = ( thirdLast - third)/ (n - 5);
        printf("%lld\n",n);
        first = third - (2 * diff);
        for(i=0;i<n;i++)
        {
            printf("%lld ",first);
            first += diff;
        }
        printf("\n");
    }
    return 0;
}
