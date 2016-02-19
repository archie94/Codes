#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    long n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        m = n;
        long sum = 2;
        long nu = 1;
        long deno = sum - nu;
        int flip = 0;
        int flag = 0;
        while(sum)
        {
            for(;deno>=1;deno--,nu++)
            {
                n--;
                if(!n)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
            break;

            if(flip)
            flip = 0;
            else
            flip = 1;

            sum++;
            nu = 1;
            deno = sum - nu;
        }
        if(flip)
        printf("TERM %ld IS %ld/%ld\n",m,nu,deno);
        else
        printf("TERM %ld IS %ld/%ld\n",m,deno,nu);
    }
    return 0;
}
