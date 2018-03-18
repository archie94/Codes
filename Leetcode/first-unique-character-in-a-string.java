// https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
    public int firstUniqChar(String s) {
        int map[] = new int[26]; // keep 256 for all ASCII support
        for (int i = 0; i < 26; i++) map[i] = 0;
        
        for (int i = 0; i < s.length(); i++) {
            map[s.charAt(i) - 'a']++;
        }
        
        for (int i = 0; i< s.length(); i++) {
            if (map[s.charAt(i) - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
}