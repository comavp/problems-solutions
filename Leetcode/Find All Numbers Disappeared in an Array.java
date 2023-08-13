/*
Find All Numbers Disappeared in an Array
https://www.leetcode.com/problems/find-all-numbers-disappeared-in-an-array
*/

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> list = new ArrayList<>();
        int i = 0;
        while (i < nums.length) {
            int pos = nums[i] - 1;
            if (nums[i] != nums[pos]) {
                int tmp = nums[i];
                nums[i] = nums[pos];
                nums[pos] = tmp;
            } else {
                i++;
            }
        }
        for (i = 0; i < nums.length; i++) {
            if (nums[i] - 1 != i) {
                list.add(i + 1);
            }
        }
        return list;
    }
}