#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long n;
    while(1)
    {
        scanf("%lld",&n);
        if(n == -1)
        break;
        // 1 + (1+6) + (1+6+12) + (1+6+12+18) + (1+6+12+18+24) + .... so on
        long long sum = 1;
        long long i = 1;
        while(sum<n)
        {
            sum += (6*i);
            i++;
        }
        if(sum == n)
        printf("Y\n");
        else
        printf("N\n");
    }
    return 0;
}
