#include <stdlib.h>
#include <stdio.h>
long long a[300001];
int main()
{
    long long n,m,i,x;
    long long sum = 0;
    long long finalSum = 0;
    long long sum_start_here=0;
    long long sum_end_here=0;


    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);

    for(i=0;i<n;i++)
    {
        sum += a[i];
        sum_end_here = i;

        while(sum > m)
        {
            sum -= a[sum_start_here];
            sum_start_here++;
        }
        if(finalSum < sum)
            finalSum = sum;
    }
    printf("%lld\n",finalSum);
    return 0;
}
