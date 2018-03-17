//https://leetcode.com/problems/hamming-distance/description/

class Solution {
    public int hammingDistance(int x, int y) {
        int ans = x ^ y;
        int count = 0;
        while (ans/2 != 0) {
            if (ans%2 == 1) count++;
            ans/=2;
        }
        
        if (ans == 1) count++;
        
        return count;
    }
}
