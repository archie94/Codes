#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,l,m,i,j;
    char s[201];
    while(1)
    {
        scanf("%d",&n);
        if(!n)
        break;

        fflush(stdin);
        scanf("%s",s);

        l = strlen(s);
        m = l/n;
        char **matrix;
        matrix = (char **)malloc(m * sizeof(char *));
        for(i=0;i<m;i++)
        matrix[i] = (char *)malloc(n * sizeof(char));

        int r=0,c=0,f=0;
        for(i=0;i<l;i++)
        {
            if(!f)
            matrix[r][c++] = s[i];
            else
            matrix[r][c--] = s[i];
            if(c == n)
            {
                r++;
                c = n-1;
                f = 1;
            }
            else if(c == -1)
            {
                r++;
                c = 0;
                f = 0;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            printf("%c",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
