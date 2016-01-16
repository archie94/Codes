#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a,const void *b)
{
    return ( *(int *)a - *(int *)b);
}

int main()
{
    int n,a[1001],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    qsort(a,n,sizeof(int),cmpfunc);
    int start = 0;
    while(start<n)
    {
        int s = start;
        for(i=start;i<n;i++)
        {
            if(a[i]-a[s] == 0)
            start++;
        }
        printf("%d\n",n-s);
    }
    return 0;
}
