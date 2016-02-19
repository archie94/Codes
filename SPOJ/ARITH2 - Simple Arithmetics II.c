#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

    char c;
    long long t,k,op;
    int flag = 0;
    scanf("%lld",&t);
    scanf("%c",&c);
    while(t--)
    {
        //fflush(stdin);
        scanf("%c",&c);
        flag = 0;
        op = -1;
        k = 0;
        long long num[2] = {0};
        while(c != '\n')
        {
            flag = 1;
            //fflush(stdin);
            if(c == ' ')
            {
                scanf("%c",&c);
                continue;
            }
            if(c=='+' || c=='-' || c=='*' || c=='/' || c=='=')
            {
                if(k==0)
                    k++;
                else if(k==1)
                {
                    if(op == 0)
                        num[0] += num[1];
                    else if(op == 1)
                        num[0] -= num[1];
                    else if(op == 2)
                        num[0] *= num[1];
                    else if(op == 3)
                        num[0] /= num[1];

                    num[1] = 0;
                }

                if(c == '+')
                    op = 0;
                else if(c == '-')
                    op = 1;
                else if(c == '*')
                    op = 2;
                else
                    op = 3;
            }
            else
                num[k] = num[k]*10 + (c-'0');

            scanf("%c",&c);
        }
        if(flag)
        printf("%lld\n",num[0]);
        else
        t++;
    }
    return 0;
}
