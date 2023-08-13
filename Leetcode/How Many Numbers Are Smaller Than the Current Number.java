/*
How Many Numbers Are Smaller Than the Current Number
https://www.leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number
*/

class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] ans = new int[nums.length];

        Map<Integer, List<Integer>> indexesMap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (!indexesMap.containsKey(nums[i])) {
                indexesMap.put(nums[i], new ArrayList<>(Arrays.asList(i)));
            } else {
                indexesMap.get(nums[i]).add(i);
            }
        }

        Arrays.sort(nums);

        for (int i = 0; i < nums.length; i++) {
            List<Integer> oldIndexes = indexesMap.get(nums[i]);
            if (oldIndexes.size() == 1) {
                int oldIndex = oldIndexes.get(0);
                ans[oldIndex] = i;
            } else {
                for (Integer oldIndex : oldIndexes) {
                    ans[oldIndex] = i;
                }
                i += oldIndexes.size() - 1;
            }
        }

        return ans;
    }
}