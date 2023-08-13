/*
Binary Search
https://www.leetcode.com/problems/binary-search
*/

class Solution {
    public int search(int[] nums, int target) {
        int l = -1, r = nums.length - 1, m = 0;
        while (r - l > 1) {
            m = (l + r) / 2;
            if (nums[m] >= target) {
                r = m;
            } else {
                l = m;
            }
        }
        return nums[r] == target ? r : -1;
    }
}