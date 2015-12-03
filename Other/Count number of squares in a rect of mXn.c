/* Count number of squares in a mXn rectangle */


/*
Let us first solve this problem for m = n, i.e., for a square:

For m = n = 1, output: 1

For m = n = 2, output: 4 + 1 [4 of size 1×1 + 1 of size 2×2]

For m = n = 3, output: 9 + 4 + 1 [4 of size 1×1 + 4 of size 2×2 + 1 of size 3×3]

For m = n = 4, output 16 + 9 + 4 + 1 [16 of size 1×1 + 9 of size 2×2 + 4 of size 3×3 + 1 of size 4×4]

In general, it seems to be n^2 + (n-1)^2 + … 1 = n(n+1)(2n+1)/6

Let us solve this problem when m may not be equal to n:

Let us assume that m <= n

From above explanation, we know that number of squares in a m x m matrix is m(m+1)(2m+1)/6

What happens when we add a column, i.e., what is the number of squares in m x (m+1) matrix?

When we add a column, number of squares increased is m + (m-1) + … + 3 + 2 + 1
[m squares of size 1×1 + (m-1) squares of size 2×2 + … + 1 square of size m x m]

Which is equal to m(m+1)/2

So when we add (n-m) columns, total number of squares increased is (n-m)*m(m+1)/2.

So total number of squares is m(m+1)(2m+1)/6 + (n-m)*m(m+1)/2.

Using same logic we can prove when n <= m. So, in general,

Total number of squares = m x (m+1) x (2m+1)/6 +
                          (n-m) x m x (m+1)/2

when n is larger dimension
.

Using above logic for rectangle, we can also prove that number of squares in a square is n(n+1)(2n+1)/6
*/
#include <stdio.h>
int main()
{
    int m,n,num;
    printf("Enter m,n\n");
    scanf("%d%d",&m,&n);
    if(m>n)
    num=(n*(n+1)*(2*n+1)/6) + ((m-n)*n*(n+1)/2);
    else
    num=(m*(m+1)*(2*m+1)/6) + ((n-m)*m*(m+1)/2);
    printf("%d\n",num);
    return 0;
}
