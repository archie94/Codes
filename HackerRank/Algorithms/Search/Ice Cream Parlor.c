#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,m,n,c[10001],i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        for(i=0;i<n;i++)
        scanf("%d",&c[i]);

        for(i=0;i<n;i++)
        {
            int flag = 0;
            int j;
            for(j=i+1;j<n;j++)
            {
                if(c[i]+c[j] == m)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
            printf("%d %d\n",i+1,j+1);
        }
    }
    return 0;
}
