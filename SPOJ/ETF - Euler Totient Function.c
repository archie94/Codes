#include <stdio.h>
#include <stdlib.h>

int main()
{
    long t,n;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        long p = 2;
        float res = n;
        for(p=2;p*p<=n;++p)
        {
            if (n % p == 0)
            {
                while (n % p == 0)
                n /= p;
                res *= (1.0 - (1.0 / (float) p));
            }
        }
        if (n > 1)
        res *= (1.0 - (1.0 / (float) n));
        printf("%ld\n",(long)res);
    }
    return 0;
}
