#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    if((n&(n-1)) == 0) // 2^n calculation
    printf("TAK\n");
    else
    printf("NIE\n");
}
