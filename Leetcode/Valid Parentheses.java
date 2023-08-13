/*
Valid Parentheses
https://www.leetcode.com/problems/valid-parentheses
*/

class Solution {
    public boolean isValid(String s) {
        String open = "([{";
        String closed = ")]}";
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            Character currentBracket = s.charAt(i);
            if (open.contains(currentBracket.toString())) {
                stack.push(currentBracket);
            } else {
                if (stack.isEmpty()) {
                    return false;
                }
                Character brFromStack = stack.pop();
                if (open.indexOf(brFromStack) != closed.indexOf(currentBracket)) {
                    return false;
                }
            }
        }

        return stack.isEmpty();
    }
}