/*
Valid Palindrome
https://www.leetcode.com/problems/valid-palindrome
*/

class Solution {
    public boolean isPalindrome(String s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            while(l <= r && !Character.isAlphabetic(s.charAt(l)) && !Character.isDigit(s.charAt(l))) {
                l++;
            }
            while(l <= r && !Character.isAlphabetic(s.charAt(r)) && !Character.isDigit(s.charAt(r))) {
                r--;
            }

            if (l <= r && Character.toLowerCase(s.charAt(l)) != Character.toLowerCase(s.charAt(r))) {
                return false;
            } else {
                l++;
                r--;
            }
        }

        return true;
    }
}