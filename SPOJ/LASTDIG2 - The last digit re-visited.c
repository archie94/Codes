#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[1001];
    long long b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        fflush(stdin);
        scanf("%s",a);
        scanf("%lld",&b);
        int l = strlen(a);
        long long d = a[l-1]-'0';
        if(b == 0)
        {
            printf("1\n");
            continue;
        }
        int r =1;
        while(b)
        {
            if(b%2 == 1)
            r*=d;
            d*=d;
            d%=10;
            r%=10;
            b/=2;
            if(!r)
            break;
        }
        printf("%d\n",r);
    }
    return 0;
}
