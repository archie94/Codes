#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char size[110];
    while(1)
    {
        int i;
        fflush(stdin);
        scanf("%s",&size);
        int l = strlen(size);

        if(l==0) // no number ==> terminate
        return 0;

        if(l==1 && size[0] == '0')
        {
            printf("0\n");
            size[0]=0;
            continue;
        }
        if(l==1 && size[0]=='1')
        {
            printf("1\n");
            size[0]=0;
            continue;
        }

        // reverse the number in the array --> easier for calculation
        for(i=0;i<l/2;i++)
        {
            char temp = size[i];
            size[i] = size[l-i-1];
            size[l-i-1] = temp;
        }

        /* for a chessboard of dimension N*N we can place 2*(N-1)
           bishops so that no two can attack each other */

        int carry = 0;
        for(i=0;i<l;i++)
        {
            size[i]=2*(size[i]-'0')+carry;
            if(size[i]>=10)
            {
                carry = 1;
                size[i]-=10;
            }
            else
            carry = 0;
        }
        // if we have carry in the end then add a 1 in the beginning of the number
        if(carry)
        size[l++] = 1;

        int borrow = 0;
        size[0]-=2; // we need 2*N-2 and we have calculated 2*N
        if(size[0]<0)
        {
            borrow = 1;
            size[0]+=10;
        }
        //else
        //borrow = 0;

        i=1;
        while(borrow==1)
        {
            size[i]--;
            if(size[i]==-1)
            {
                size[i]=9;
                borrow=1;
            }
            else
            borrow=0;

            i++;
        }
        if(size[l-1]==0)
        l--;

        for(i=l-1;i>=0;i--)
        printf("%c",size[i]+'0');
        printf("\n");
        size[0]=0;
    }
    return 0;
}
