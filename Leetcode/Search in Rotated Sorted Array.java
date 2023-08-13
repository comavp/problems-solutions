/*
Search in Rotated Sorted Array
https://www.leetcode.com/problems/search-in-rotated-sorted-array
*/

class Solution {
    public int search(int[] arr, int target) {
        int l = -1, r = arr.length - 1, m = 0;
        int first = arr[0];
        boolean isTargetInLeftPart = target >= first;

        while (r - l > 1) {
            m = (l + r) / 2;
            boolean isMidInLeftPart = arr[m] >= first;

            if (arr[m] >= target) {
                if (isTargetInLeftPart == isMidInLeftPart) {
                    r = m;
                } else {
                    l = m;
                }
            } else {
                if (isTargetInLeftPart == isMidInLeftPart) {
                    l = m;
                } else {
                    r = m;
                }
            }
        }

        return arr[r] == target ? r : -1;
    }
}