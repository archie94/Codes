// https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
    public int findDuplicate(int[] a) {
        
        if (a.length <= 1) return -1;
        
        int slow = a[0];
        int fast = a[a[0]];
        
        while (slow != fast) {
            slow = a[slow];
            fast = a[a[fast]];
        }
        
        fast = 0;
        while (fast != slow) {
            fast = a[fast];
            slow = a[slow];
        }
        
        return fast;
    }
}