/*
Contains Duplicate
https://www.leetcode.com/problems/contains-duplicate
*/

class Solution {
    public boolean containsDuplicate(int[] nums) {
        final Set<Integer> s = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (s.contains(nums[i])) {
                return true;
            }
            s.add(nums[i]);
        }
        return false;
    }
}