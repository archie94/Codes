#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ar,n,i,low,high,v,found=0;
    scanf("%d",&v);
    scanf("%d",&n);
    ar=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);

    low=0;high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(ar[mid]>v)
        high=mid-1;
        else if(ar[mid]<v)
        low=mid+1;
        else
        {
            found = mid;
            break;
        }
    }
    if(found)
    printf("%d\n",found);
    else
    printf("-1");
    return 0;
}
