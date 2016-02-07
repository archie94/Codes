#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,sum;
    while(1)
    {
        scanf("%f",&c);
        if(c == 0.00)
        break;
        float sum = 0.0;
        int i;
        for(i=2;sum<=c;i++)
        sum += 1.0/i;
        printf("%d card(s)\n",i-2);
    }
    return 0;
}
