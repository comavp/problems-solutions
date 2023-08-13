/*
Matrix Diagonal Sum
https://www.leetcode.com/problems/matrix-diagonal-sum
*/

class Solution {
    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (i != n - 1 - i) {
                result += mat[i][i] + mat[i][n - 1 - i];
            } else {
                result += mat[i][i];
            }
        }
        return result;
    }
}