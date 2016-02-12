#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,m,r,count = 0;
    int flag = 0;
    scanf("%lld",&n);
    m = n;
    while(m>1)
    {
        if(m==4 || m==16 || m==37 || m==58 || m==89 || m==145 || m==42 || m==20)
        {
            flag = 0;
            break;
        }
        long long num = 0;
        while(m>0)
        {
            r = m%10;
            m/=10;
            num += (r*r);
        }
        count++;
        if(num == n)
        {
            flag = 0;
            break;
        }
        m = num;
        if(m == 1)
        flag = 1;
    }
    if(n == 1)
    printf("0\n");
    else if(flag)
    printf("%lld\n",count);
    else
    printf("-1\n");
    return 0;
}
