#include <stdio.h>
#include <stdlib.h>
int lucky[1001];
int isLucky(int num)
{
    // prime factorise num
    int count = 0;
    int p = 2;
    while(num>1)
    {
        while(num%p)
        p++;

        count++;
        if(count>=3)
        return 1;

        while(num%p == 0)
        num = num/p;
    }
    return 0;
}
int main()
{
    int count=0,num = 1,t,n;
    // store first 1000 lucky nos in an array
    while(count<1000)
    {
        if(isLucky(num) == 1)
        lucky[count++]=num;
        num++;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",lucky[n-1]);
    }
    return 0;
}
