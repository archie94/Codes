#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Let g be the number of girls and b be the number of boys and let b>g.
Now, if * represents the girls and let their arrangement be like :
      *     *      *      *        *   ,
then think how many boys will you fill on those spaces so that you get
the minimum gender regularity.There are g+1 spaces.
So first we fit all the spaces with equal number of boys and
then distribute the remaining boys to one boy per space
*/
int main()
{
    int g,b;
    while(1)
    {
        scanf("%d%d",&g,&b);
        if(g == -1 && b == -1)
        break;
        int n;
        if(g==0 && b==0)
        n=0;
        else if(b==g)
        n=1;
        else if(g>b)
        n = (g+b)/(b+1);
        else
        n = (g+b)/(g+1);
        printf("%d\n",n);
    }
    return 0;
}
