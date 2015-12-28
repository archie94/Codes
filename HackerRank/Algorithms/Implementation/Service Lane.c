#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,t,width[100001],i,j;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++)
    scanf("%d",&width[i]);
    while(t--)
    {
        scanf("%d%d",&i,&j);
        int bike=0,car=0,truck=0;
        for(;i<=j;i++)
        {
            if(width[i] == 1)
            bike++;
            else if(width[i] == 2)
            car++;
            else
            truck++;
        }
        if(bike == 0 && car == 0 && truck > 0)
        printf("3\n");
        else if(bike == 0 && car > 0)
        printf("2\n");
        else
        printf("1\n");
    }
    return 0;
}
