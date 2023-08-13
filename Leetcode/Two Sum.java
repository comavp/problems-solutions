/*
Two Sum
https://www.leetcode.com/problems/two-sum
*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        final Map<Integer, Integer> map = new HashMap<>();
        final int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            int currentValue = nums[i];
            if (map.containsKey(target - currentValue)) {
                result[0] = i;
                result[1] = map.get(target - currentValue);
                break;
            } else {
                map.put(currentValue, i);
            }
        }
        return result;
    }
}