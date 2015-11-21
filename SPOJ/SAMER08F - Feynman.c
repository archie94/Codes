#include <stdio.h>

int main()
{
    int n;
    long long result=0;
    float res = 0.0;
    scanf("%d",&n);
    while(n>0)
    {
        // Required result is (n*(n+1)*(2n+1))/6
        res = (n/6.0)*(n+1)*(2*n+1);
        result = (long long)res;
        printf("%lld\n",result);
        scanf("%d",&n);
    }
    return 0;
}
