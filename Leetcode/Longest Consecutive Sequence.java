/*
Longest Consecutive Sequence
https://www.leetcode.com/problems/longest-consecutive-sequence
*/

class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        Set<Integer> s = new HashSet<>();
        Map<Integer, Integer> distanceMap = new HashMap<>();

        int ans = 1;

        for (int i = 0; i < nums.length; i++) {
            s.add(nums[i]);
            distanceMap.put(nums[i], 0);
        }

        for (int i = 0; i < nums.length; i++) {
            int cur = nums[i] - 1;
            int curAns = 1;
            if (distanceMap.get(nums[i]) > 1) continue;
            while (s.contains(cur)) {
                if (distanceMap.get(cur) == 0) {
                    distanceMap.put(cur, 1);
                    curAns++;
                    cur--;
                } else {
                    curAns += distanceMap.get(cur);
                    break;
                }
            }
            distanceMap.replace(nums[i], curAns);
            ans = Math.max(ans, curAns);
        }

        return ans;
    }
}