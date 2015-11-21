#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long dp[5001];
    char s[5005];
    while(1)
    {
        fflush(stdin);
        scanf("%s",s);
        int l = strlen(s);
        int i;

        /* dp[i] gives the number of possible decodings with the first i characters of the string
        So dp[l] gives the final answer */

        // if the entered string is '0' then we terminate our loop
        if((l==1) && (s[0]=='0'))
        break;

        for(i=0;i<5001;i++)
        dp[i]=0;
        dp[0]=1;

        for(i=0;i<l;i++)
        {
            if(s[i]=='0')
            continue ;

            /* if (i)th character is valid number then dp[i+1]+=dp[i]
            This is because we can append the character corresponding to the i+1 th digit
            to the right of all possible codes and get only as many number of codes as using ith
            digits.
            Similarly if ith and i+1th character together make a number <26 then we have
            dp[i+2]+=dp[i], since  we can append character for this number to the right of
             all codes possible using first (i) elements of string, since we already used
              (i+1)th and (i+2)th  element to make this two digit  number.
            */
            dp[i+1]+=dp[i];

            if(i==l-1)
            continue ; // the last character ignore the next steps

            // if taking ith and i+1 th digits make a number > 26 then ignore
            if(s[i]> '2')
            continue ;
            if(s[i]=='2' && s[i+1]>'6')
            continue;

            dp[i+2]+=dp[i];
        }
        printf("%lld\n",dp[l]);
    }
    return 0;
}
