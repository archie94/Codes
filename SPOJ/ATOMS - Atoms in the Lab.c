#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long P,N,K,M;
    scanf("%lld",&P);
    while(P--)
    {
        scanf("%lld%lld%lld",&N,&K,&M);
        long long ratio = M/N;
        long long t=0;
        while(K <= (M/N))
        {
            t++;
            N = N*K;
        }
        printf("%lld\n",t);
    }
    return 0;
}
