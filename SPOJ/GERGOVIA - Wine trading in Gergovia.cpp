#include <cstdio>
#include <algorithm>
#include <math.h>

int main()
{
    long long n,a,i,res,m,b;
    while(1)
    {
        scanf("%lld",&n);
        if(!n)
            break;

        res = 0;
        m = 0;
        scanf("%lld",&a);
        b=a;
        for(i=1;i<n;i++)
        {
            res += fabs(b);
            scanf("%lld",&a);
            b += a;
        }
        printf("%lld\n",res);
    }
    return 0;
}
