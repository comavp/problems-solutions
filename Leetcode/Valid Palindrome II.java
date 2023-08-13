/*
Valid Palindrome II
https://www.leetcode.com/problems/valid-palindrome-ii
*/

class Solution {
    private class Pair<T, U> {
        T first;
        U second;

        public Pair(T first, U second) {
            this.first = first;
            this.second = second;
        }

        public T getFirst() {
            return this.first;
        }

        public U getSecond() {
            return this.second;
        }
    }

    public boolean validPalindrome(String s) {
        int l = 0, r = s.length() - 1;

        var result = isStillPalindrome(l, r, s);
        var indexes = result.second;
        if (result.first) {
            return true;
        }

        return isStillPalindrome(indexes.first + 1, indexes.second, s).first ||
                isStillPalindrome(indexes.first, indexes.second - 1, s).first;
    }

    private Pair<Boolean, Pair<Integer, Integer>> isStillPalindrome(int l, int r, String s) {
        while (s.charAt(l) == s.charAt(r) && l < r) {
            l++;
            r--;
        }

        return new Pair<>(l >= r, new Pair<>(l, r));
    }
}