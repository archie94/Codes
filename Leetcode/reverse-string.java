// https://leetcode.com/problems/reverse-string/description/

class Solution {
    public String reverseString(String s) {
        if (s == null) return s;
        
        /**
            
            Gives TLE
        String str = "";
        for (int i = 0; i < s.length(); i++) {
            str = s.charAt(i) + str;
        }
        
        return str;
        **/
            
        StringBuilder sb = new StringBuilder(s);
        sb.reverse();
        return sb.toString();
    }
}