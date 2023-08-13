/*
Find Minimum in Rotated Sorted Array
https://www.leetcode.com/problems/find-minimum-in-rotated-sorted-array
*/

class Solution {
    public int findMin(int[] nums) {
        int l = -1, r = nums.length - 1, m = 0;
        int first = nums[0];

        while (r - l > 1) {
            m = (l + r) / 2;
            if (nums[m] >= first) {
                l = m;
            } else {
                r = m;
            }
        }

        return Math.min(first, nums[r]);
    }
}