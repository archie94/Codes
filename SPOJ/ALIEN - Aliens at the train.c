#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long t,a,b,i;
    long long human[100001];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        for(i=0;i<a;i++)
            scanf("%lld",&human[i]);

        long long sum = 0;
        long long finalSum = 0;
        long long start = 0;
        long long end = 0;
        long long windowLength = 0;

        for(i=0;i<a;i++)
        {
            sum += human[i];
            end = i;

            while( sum > b)
            {
                sum -= human[start];
                start++;
            }

            if(windowLength < (end - start))
            {
                finalSum = sum;
                windowLength = end - start;
            }
            else if((windowLength == (end - start)) && (finalSum > sum))
            {
                finalSum = sum;
            }
        }
        printf("%lld %lld\n",finalSum,windowLength+1);
    }
    return 0;
}
