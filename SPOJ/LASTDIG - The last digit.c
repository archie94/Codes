#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long b;
    int a;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%lld",&a,&b);
        int r = 1;
        while(b)
        {
            if(b%2 == 1)
            r *= a;

            a *= a;
            a %= 10;
            r = r % 10;
            b /= 2;
            if(r == 0)
            break;
        }
        printf("%d\n",r);
    }
    return 0;
}
