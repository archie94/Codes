// https://leetcode.com/problems/top-k-frequent-elements/description/#_=_

class Solution {
    
    public List<Integer> topKFrequent(int[] nums, int k) {
        List<Integer>[] freq = new List[nums.length + 1];
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for (int n : nums) {
            map.put(n, map.getOrDefault(n, 0) + 1);
        }
        
        for (int n : map.keySet()) {
            int f = map.get(n);
            if (freq[f] == null) {
                freq[f] = new ArrayList<Integer>();
            }
            freq[f].add(n);
        }
        
        List<Integer> ans = new ArrayList<>(k);
        for (int i = nums.length; i >= 0 && ans.size() <= k; i--) {
            if (freq[i] != null) {
                ans.addAll(freq[i]);
            }
        }
        
        return ans.subList(0, k);
    }
}