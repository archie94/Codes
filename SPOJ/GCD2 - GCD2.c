#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int i,a,rem,t;
    char b[300];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %s",&a,b);
        if(!a)
        {
            printf("%s\n",b);
            continue;
        }
        i = 0;
        rem = 0;
        while(b[i])
        {
            /*
            (a*b)%m = ((a%m)*b)%m
            (a+b)%m = (a%m)+b)%m
            */
            rem = ((rem*10)+(b[i++]-'0'))%a;
        }
        printf("%d\n",gcd(a,rem));
    }
    return 0;
}
