/*
Valid Mountain Array
https://www.leetcode.com/problems/valid-mountain-array
*/

class Solution {
    public boolean validMountainArray(int[] arr) {
        if (arr.length < 3) return false;

        int ext = -1;

        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                return false;
            } else if (arr[i] < arr[i + 1] && ext != -1) {
                return false;
            } else if (arr[i] > arr[i + 1]) {
                if (ext == -1) ext = i;
            }
        }

        return ext != 0 && ext != -1;
    }
}