#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,d,i,striker,gk,cb,pos,oppStriker;
    int b[12],c[12];
    while(1)
    {
        scanf("%d%d",&a,&d);
        if(!a && !d)
        break;
        for(i=0;i<a;i++)
        scanf("%d",&b[i]);
        for(i=0;i<d;i++)
        scanf("%d",&c[i]);

        striker = b[0];
        for(i=0;i<a;i++)
        if(b[i]<striker)
        striker = b[i];

        gk = c[0];
        pos = 0;
        oppStriker = c[0];
        for(i=0;i<d;i++)
        {
            if(c[i]>oppStriker)
            oppStriker = c[i];
            if(c[i]<gk)
            {
                gk = c[i];
                pos = i;
            }
        }
        cb = oppStriker;
        for(i=0;i<d;i++)
        {
            if(c[i]<cb && i!=pos)
            cb = c[i];
        }
        if(cb == gk && gk == striker)
        printf("N\n");
        else if(gk<striker && striker>=cb)
        printf("N\n");
        else
        printf("Y\n");
    }
    return 0;
}
