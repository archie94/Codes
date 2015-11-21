#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 1000000000

long long sq1=0,sq2=0;
char prime[1000000001];
void seive()
{
    memset(prime,1,MAX+1);
    long long i,j;
    //printf("seive started \n");
    prime[0]=prime[1]=0;//not primes
    for(i=2;i<sq2;i++)
    {
        if(prime[i])
        {
            for(j=i*i;j<=sq1;j+=i)
            {
                if(prime[j])
                prime[j]=0;
            }
        }
    }
    //printf("seive ended \n");
}
void segmentedSeive(long long a,long long b)
{
    long long limit=sqrt(b);
    long long i,j;
    //printf("segment started \n");
    for(i=2;i<=limit;i++)
    {
        if(prime[i])
        {
            for(j=a-(a%i);j<=b;j+=i)
            if(prime[j] && j!=i && j>=a)
            prime[j]=0;
        }
    }
    //printf("seive ended \n");
}
int main()
{
    long long i,m,n,t;
    sq1=31622;//square root of max
    sq2=sqrt(sq1);
    seive();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&m,&n);
        if(n>sq2)
        {
            segmentedSeive(m,n);
        }
        for(i=m;i<=n;i++)
        if(prime[i])
        printf("%lld\n",i);


        printf("\n");
    }
    return 0;
}
