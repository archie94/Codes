#include <stdio.h>

long rev(long num)
{
    // reverse a number
    long revnum=0;
    while(num>0)
    {
        int r=num%10;
        revnum=revnum*10+r;
        num/=10;
    }
    return revnum;
}
int main()
{
    long n,a,b,sum;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld%ld",&a,&b);
        // get reversed numbers
        long a1=rev(a);
        long b1=rev(b);

        a1=a1+b1;
        // get reverse of sum
        sum=rev(a1);
        printf("%ld\n",sum);
    }
    return 0;
}
