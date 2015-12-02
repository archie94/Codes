/*
The longest Increasing Subsequence (LIS) problem
is to find the length of the longest subsequence
of a given sequence such that all elements of the
subsequence are sorted in increasing order.
For example, length of LIS for { 10, 22, 9, 33, 21, 50, 41, 60, 80 }
is 6 and LIS is {10, 22, 33, 50, 60, 80}.

*/

/* Dynamic Programming */

/*
Let arr[0..n-1] be the input array and L(i) be the
length of the LIS till index i such that arr[i] is
part of LIS and arr[i] is the last element in LIS,
then L(i) can be recursively written as.
L(i) = { 1 + Max ( L(j) ) } where j < i and arr[j] < arr[i] and
if there is no such j then L(i) = 1
To get LIS of a given array, we need to return max(L(i)) where 0 < i < n
So the LIS problem has optimal substructure property as the main problem
can be solved using solutions to subproblems.
*/


#include <stdio.h>

int main()
{
    int n,*arr,*LIS,i,j,max=0;
    printf("enter no of elements and then the elements\n");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // initialise the LIS array to all 1
    LIS=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        LIS[i]=1;

    // Compute LIS value in bottom up mannner
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        if(arr[j]<arr[i] && (LIS[j]+1)>LIS[i])
        LIS[i]=LIS[j]+1;
    }
    // Find maximum LIS value
    for(i=0;i<n;i++)
    if(max<LIS[i])
    max=LIS[i];

    printf("Length of LIS is %d\n",max);
    return 0;
}
/* O(n^2) complexity .... Can be reduced to O(nlogn) */
