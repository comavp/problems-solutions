/*
Length of Last Word
https://www.leetcode.com/problems/length-of-last-word
*/

class Solution {
    public int lengthOfLastWord(String s) {
        
        int ans = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                ans++;
            } else if (ans != 0) {
                break;
            }
        }
        
        return ans;
    }
}