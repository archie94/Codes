#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long n,pi,res;
    scanf("%lld",&n);
    n--;
    scanf("%lld",&pi);
    res=pi;
    /* We find XOR of all the numbers .
       Since all nos but one appears twice after XOR ing we will be left with
       the number which appears only once */
    while(n--)
    {
        scanf("%d",&pi);
        res = res ^ pi;
    }
    printf("%lld\n",res);
    return 0;
}
