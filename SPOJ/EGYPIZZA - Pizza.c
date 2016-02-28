#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,a,b;
    int half = 0, quarter = 0, threeQ = 0;
    int sum = 0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d/%d",&a,&b);
        if(b==2)
            half++;
        else if(b==4 && a==3)
            threeQ++;
        else if(b==4 && a==1)
            quarter++;
    }
    // take all 3/4 into account
    sum += threeQ;

    // now add 1/4 into them and check if any 1/4 remains
    quarter = quarter - threeQ;
    if(quarter<0)
        quarter = 0;

    // take 1/2 into account ... see if there is any 1/2 left
    sum += (half/2);
    half %= 2;

    // now add remaining 1/4 ... see still if any 1/4 is left
    sum += quarter/4;
    quarter %= 4;

    /*
    if any 1/2 is left take 1/2 and 2 1/4 to order one whole pizza
    if more than 2 1/4 are left we need another pizza
    */
    if(half)
    {
        if(quarter <= 2)
            sum += 1;
        else
            sum += 2;
    }
    /*
    if no 1/2 is left but few 1/4 are left we need another pizza
    */
    else if(quarter)
    {
        sum++;
    }

    printf("%d\n",(sum+1));
    return 0;
}
