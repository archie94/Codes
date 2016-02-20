#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if (x==y)
			printf("%d\n",x+2*(x/2));
		else if (x-y==2)
			printf("%d\n",x+2*((x-2)/2));
		else
			printf("No Number\n");
    }
    return 0;
}
