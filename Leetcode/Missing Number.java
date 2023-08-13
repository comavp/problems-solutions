/*
Missing Number
https://www.leetcode.com/problems/missing-number
*/

class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int allSum = n * (n + 1) / 2;
        int partlySum = 0;
        for (int i = 0; i < nums.length; i++) {
            partlySum += nums[i];
        }
        return allSum - partlySum;
    }
}