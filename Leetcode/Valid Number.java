/*
Valid Number
https://www.leetcode.com/problems/valid-number
*/

class Solution {
    public boolean isNumber(String s) {
        boolean hadSign = false;
        boolean hadPoint = false;
        boolean hadExp = false;
        boolean hadDigit = false;

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (isSign(ch)) {
                if (isSign(ch) && hadPoint || isSign(ch) && hadDigit || isSign(ch) && hadDigit || hadSign) return false;

                hadSign = true;
            } else if (ch == '.') {
                if (hadPoint) return false;
                if (hadExp) return false;

                hadPoint = true;
            } else if (Character.isAlphabetic(ch)) {
                if (ch != 'e' && ch != 'E') return false;
                if (hadExp) return false;
                if (!hadDigit) return false;

                hadExp = true;

                hadPoint = false;
                hadSign = false;
                hadDigit = false;
            } if (Character.isDigit(ch)) {
                hadDigit = true;
            }
        }

        if (hadExp && !hadDigit) return false;
        if (hadPoint && !hadDigit) return false;
        if (hadSign && !hadDigit) return false;

        return true;
    }

    private boolean isSign(char ch) {
        return ch == '-' || ch == '+';
    }
}