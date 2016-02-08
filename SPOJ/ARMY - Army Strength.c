#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,ng,nm,maxG=0,maxM=0,i,x;
    scanf("%d",&t);
    while(t--)
    {
        maxG = 0;
        maxM = 0;

        scanf("%d%d",&ng,&nm);
        for(i=0;i<ng;i++)
        {
            scanf("%d",&x);
            if(x>maxG)
            maxG = x;
        }
        for(i=0;i<nm;i++)
        {
            scanf("%d",&x);
            if(x>maxM)
            maxM = x;
        }
        if(maxG >= maxM)
        printf("Godzilla\n");
        else
        printf("MechaGodzilla\n");
    }
    return 0;
}
