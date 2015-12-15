/*
Given an array arr[] of size n and integer k such that k <= n.

Input:  arr[] = {3, 7, 90, 20, 10, 50, 40}, k = 3
Output: Subarray between indexes 3 and 5
The subarray {20, 10, 50} has the least average
among all subarrays of size 3.

Input:  arr[] = {3, 7, 5, 20, -10, 0, 12}, k = 2
Output: Subarray between [4, 5] has minimum average
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,sum,minSum,leftEnd,*a;
    scanf("%d",&n);
    scanf("%d",&k);

    if(n<k)
    {
        printf("u kidding ?? ");
        return 0;
    }
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);


    leftEnd = 0;
    sum = a[0];
    for(i=1;i<k;i++)
    sum+=a[i];

    minSum = sum;
    for(i=k;i<n;i++)
    {
        sum = sum + a[i]-a[i-k];
        if(sum < minSum)
        {
            minSum = sum;
            leftEnd = (i-k+1);
        }
    }

    printf(" The least average is present between %d and %d\n",leftEnd,(leftEnd+k-1));
    return 0;
}
