#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long t,n;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu",&n);
        printf("%llu\n",(n*(n+2)*(2*n + 1)/8));
    }
    return 0;
}
