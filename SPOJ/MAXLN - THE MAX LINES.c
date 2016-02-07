#include <stdio.h>
#include <stdlib.h>
int main()
{
    float r;
    int t;
    int i;
    scanf("%d",&t);
    i = t;
    /*
    AB2+AC2=BC2AB2+AC2=BC2

    AB2+AC2=(2r)2AB2+AC2=(2r)2

    AB2=4r2−AC2

    s=AB2+ACs=AB2+AC

    s=4r2−AC2+ACs=4r2−AC2+AC

    s=−AC2+AC+4r2s=−AC2+AC+4r2
    Now we have a quadratic equation, and we have to find its maximum. Maximum value occurs when

    AC=-b2aAC=-b2a


    So now using values of a and b from equation 6 we get :


    AC=-b2aAC=-b2a

    AC=-1-2AC=-1-2

    AC=12AC=12


    Putting the value of AC from 8 in 6 we get :
    s=0.25+4r2s=0.25+4r2
    */
    while(t--)
    {
        scanf("%f",&r);
        printf("Case %d: %0.2f\n",(i-t),(0.25 + 4*r*r));
    }
    return 0;
}
