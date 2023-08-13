/*
Length of Last Word
https://www.leetcode.com/problems/length-of-last-word
*/

class Solution {
    public int lengthOfLastWord(String s) {
        int curAns = 0;
        int prevAns = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                if (curAns != 0) {
                    prevAns = curAns;
                    curAns = 0;
                }
            } else {
                curAns++;
            }
        }
        if (curAns != 0) {
            prevAns = curAns;
        }
        
        return prevAns != 0 ? prevAns : curAns;
    }
}