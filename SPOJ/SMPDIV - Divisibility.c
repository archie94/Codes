#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&x,&y);
        int i;
        for(i = x;i<=n;i++)
        if(i%x == 0 && i%y!=0)
        printf("%d ",i);
        printf("\n");
    }
    return 0;
}
