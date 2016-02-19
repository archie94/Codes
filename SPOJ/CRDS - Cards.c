#include <stdio.h>
#include <stdlib.h>

#define MOD 1000007

int main()
{
    long long t,n,i,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum = 0;

        sum = (n*(n-1)/2 + n*(n+1))%MOD;

        printf("%lld\n",sum);
    }
    return 0;
}
