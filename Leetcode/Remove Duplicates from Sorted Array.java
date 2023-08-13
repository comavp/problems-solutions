/*
Remove Duplicates from Sorted Array
https://www.leetcode.com/problems/remove-duplicates-from-sorted-array
*/

class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 1) return 1;

        int ans = 0;
        int writeIndex = 0;

        for (int i = 0; i < nums.length; i++) {
            if (i == nums.length - 1) {
                ans++;
                nums[writeIndex] = nums[i];
                break;
            }

            if (nums[i] != nums[i + 1]) {
                nums[writeIndex] = nums[i];
                ans++;
                writeIndex++;
            }
        }

        return ans;
    }
}