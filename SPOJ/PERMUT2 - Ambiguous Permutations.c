#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,permu[100001],invPermu[100001];
    while(1)
    {
        scanf("%d",&n);
        if(!n)
        break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&permu[i]);
            invPermu[permu[i]-1] = i+1;
        }
        int flag = 0;
        for(i=0;i<n;i++)
        if(permu[i]!=invPermu[i])
        flag++;

        if(flag)
        printf("not ambiguous\n");
        else
        printf("ambiguous\n");
    }
    return 0;
}
