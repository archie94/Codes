// https://leetcode.com/problems/majority-element/description/

class Solution {
    public int majorityElement(int[] nums) {
        int count = 1;
        int ele = nums[0];
        
        for (int i = 1; i < nums.length; i++) {
            if (count == 0) {
                count++;
                ele = nums[i]; // assumed majority element
            } else if (ele == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        
        return ele;
    }
}