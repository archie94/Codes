// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            int x = Math.abs(nums[i]);
            
            if (nums[x-1] < 0) continue; // already marked as negative
            
            nums[x-1] = -1 * nums[x-1]; // mark the element in x-1 index as negative
        }
        
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0) { // we have not seen this index 
                ans.add(i+1);
            }
        }
        
        return ans;
    }
}