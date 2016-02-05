#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[10001],i;
    while(1)
    {
        float avg = 0.0;
        scanf("%d",&n);
        if(n == -1)
        break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            avg += a[i]*1.0;
        }
        avg /= n;
        if(avg != (int)avg)
        {
            printf("-1\n");
            continue;
        }
        float diff = 0.0;
        int counter = 0;
        for(i=0;i<n;i++)
        {
            if(a[i]*1.0 > avg)
            {
                //counter++;
                diff += (a[i]*1.0 - avg);
            }

            else if(a[i]*1.0 < avg)
            {
                counter += ((int)avg - a[i]);
                diff -= (avg - a[i]*1.0);
            }

        }
        if(diff == 0.0)
        printf("%d\n",counter);
        else
        printf("-1\n");
    }
    return 0;
}
