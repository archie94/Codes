#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t,l;
    char s[41];
    int n,i,a[8];
    scanf("%d",&t);
    while(t--)
    {
        fflush(stdin);
        scanf("%d",&n);
        scanf("%s",s);
        l = strlen(s);
        for(i=0;i<8;i++)
        a[i] = 0;
        for(i=0;i<l-2;i++)
        {
            if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='H')
            a[7]++;
            else if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='T')
            a[6]++;
            else if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='H')
            a[5]++;
            else if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='T')
            a[4]++;
            else if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='H')
            a[3]++;
            else if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='T')
            a[2]++;
            else if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='H')
            a[1]++;
            else if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='T')
            a[0]++;
        }
        printf("%d ",n);
        for(i=0;i<8;i++)
        printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
