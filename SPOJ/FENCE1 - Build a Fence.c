#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.1415926
int main()
{
    int l=1;
    double area = 0.0;
    while(l)
    {
        scanf("%d",&l);
        if( l == 0)
        break;
        area = l*l*1.0;
        area = area/(2.0 * M_PI);
        printf("%.2lf\n",area);
    }
    return 0;
}
