/*
The question is to find XOR of the XOR’s of all subsets. i.e
if the set is {1,2,3}. All subsets are :
[{1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}].
Find the XOR of each of the subset and then find the XOR of every subset result.
*/

/* This is a very simple question to solve if we get the first step (and only step) right.
The solution is XOR is always 0 when n > 1 and Set[0] when n is 1.
*/

/* refer to http://math.stackexchange.com/questions/712487/finding-xor-of-all-subsets */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,i;
    printf("enter length of array and the array \n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    if(n == 1)
    printf("%d",a[0]);
    else
    printf("0\n");

    return 0;
}
