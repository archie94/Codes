/*
Given two binary arrays arr1[] and arr2[] of same size n.
Find length of the longest common span (i, j) where j >= i
such that arr1[i] + arr1[i+1] + …. + arr1[j] = arr2[i] + arr2[i+1] + …. + arr2[j].
*/
/* Using auxillary array */
/*
The idea is based on below observations.
Since there are total n elements, maximum sum is n for both arrays.
Difference between two sums varies from -n to n. So there are total 2n + 1 possible values of difference.
If differences between prefix sums of two arrays become same at two points, then subarrays between these two points have same sum.
Below is Complete Algorithm.

Create an auxiliary array of size 2n+1 to store starting points of all possible values of differences (Note that possible values of differences vary from -n to n, i.e., there are total 2n+1 possible values)
Initialize starting points of all differences as -1.
Initialize maxLen as 0 and prefix sums of both arrays as 0, preSum1 = 0, preSum2 = 0
Travers both arrays from i = 0 to n-1.
Update prefix sums: preSum1 += arr1[i], preSum2 += arr2[i]
Compute difference of current prefix sums: curr_diff = preSum1 – preSum2
Find index in diff array: diffIndex = n + curr_diff // curr_diff can be negative and can go till -n
If curr_diff is 0, then i+1 is maxLen so far
Else If curr_diff is seen first time, i.e., starting point of current diff is -1, then update starting point as i
Else (curr_diff is NOT seen first time), then consider i as ending point and find length of current same sum span. If this length is more, then update maxLen
Return maxLen
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *a,*b,n,i;
    printf("enter num of element in binary array\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));

    printf("enter in 2 arrays\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);

    // maxLen will store the result
    int maxLen = 0,preSum1 = 0,preSum2 = 0;
    int *diff;
    diff=(int *)malloc((2*n+1)*sizeof(int)); // since the difference will vary from -n to n the total possible results will be 2n+1
    for(i=0;i<n;i++)// initialise the whole differencr array as -1
    diff[i]=-1;

    for(i=0;i<n;i++)
    {
        // Update prefix sums
        preSum1 += a[i];
        preSum2 += b[i];

        /* Comput current diff and index to be used
         in diff array. Note that diff can be negative
         and can have minimum value as -1. */
        int currentDiff = preSum1-preSum2;
        int diffIndex = n + currentDiff;

        /* if current difference is 0 then there
        are same number of 1 in 2 arrays hence update maxLen as i+1,
        since starting from 0 index to current index i the number of 1
        in both arrays are same */
        if(currentDiff == 0)
        maxLen = i+1;

        /* If current difference is seen the first time, then update
        starting index to diff */
        else if(diff[diffIndex] == -1)
        diff[diffIndex] = i;

        // Current diff is already seen
        else
        {
             // Find lenght of this same sum common span
            int len = i - diff[diffIndex];
            // Update max len if needed
            if(len>maxLen)
            maxLen = len;
        }
    }
    printf("%d",maxLen);
    return 0;
}
// Complexity : time O(n) , space O(n) extra
