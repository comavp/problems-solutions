/*
Valid Parentheses
https://www.leetcode.com/problems/valid-parentheses
*/

class Solution {
    public boolean isValid(String s) {
        int[] arr = new int[3];
        Stack<Character> previousOpenBrackets = new Stack<>();
        String openBrackets = "([{";
        String closeBrackets = ")]}";
        for (int i = 0; i < s.length(); i++) {
            char currentValue = s.charAt(i);
            int bracketIndex;
            if (openBrackets.indexOf(currentValue) != -1) {
                previousOpenBrackets.add(currentValue);
                bracketIndex = openBrackets.indexOf(currentValue);
                arr[bracketIndex]++;
            } else if (closeBrackets.indexOf(currentValue) != -1) {
                if (previousOpenBrackets.isEmpty()) {
                    return false;
                }
                char lastOpenBracket = previousOpenBrackets.pop();
                if (!isSameBrackets(lastOpenBracket, currentValue)) {
                    return false;
                }
                bracketIndex = closeBrackets.indexOf(currentValue);
                arr[bracketIndex]--;
            }
        }
        return isValid(arr);
    }

    private boolean isSameBrackets(char openBracket, char closeBracket) {
        String roundBrackets = "()";
        String squareBrackets = "[]";
        String curlyBrackets = "{}";
        Boolean isRoundBrackets = roundBrackets.charAt(0) == openBracket && roundBrackets.charAt(1) == closeBracket;
        Boolean isSquareBrackets = squareBrackets.charAt(0) == openBracket && squareBrackets.charAt(1) == closeBracket;
        Boolean isCurlyBrackets = curlyBrackets.charAt(0) == openBracket && curlyBrackets.charAt(1) == closeBracket;
        return isRoundBrackets || isSquareBrackets | isCurlyBrackets;
    }

    private boolean isValid(int[] arr) {
        return arr[0] == 0 && arr[1] == 0 && arr[2] == 0;
    }
}