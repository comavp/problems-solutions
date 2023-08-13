/*
Merge Intervals
https://www.leetcode.com/problems/merge-intervals
*/

class Solution {
    public int[][] merge(int[][] intervals) {
        List<int[]> result = new ArrayList<>();

        Arrays.sort(intervals, (o1, o2) -> {
            if (o1[0] < o2[0]) return -1;
            else if (o1[0] == o2[0]) return 0;
            else return 1;
        });

        int ind = 0;
        result.add(intervals[0]);

        for (int i = 1; i < intervals.length; i++) {
            int[] saved = result.get(ind);
            int[] cur = intervals[i];
            if (saved[1] >= cur[0]) {
                saved[1] = Math.max(cur[1], saved[1]);
            } else {
                result.add(cur);
                ind++;
            }
        }
        return result.toArray(new int[0][]);
    }
}