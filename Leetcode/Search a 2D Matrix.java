/*
Search a 2D Matrix
https://www.leetcode.com/problems/search-a-2d-matrix
*/

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rowNum = matrix.length;
        int colNum = matrix[0].length;
        int l = -1, r = rowNum * colNum - 1, m = 0;

        while (r - l > 1) {
            m = (l + r) / 2;
            int[] matrixIndexes = arrayIndexToMatrixIndex(m, rowNum, colNum);
            if (matrix[matrixIndexes[0]][matrixIndexes[1]] >= target) {
                r = m;
            } else {
                l = m;
            }
        }

        int[] ansIndexes = arrayIndexToMatrixIndex(r, rowNum, colNum);
        return matrix[ansIndexes[0]][ansIndexes[1]] == target;
    }

    private int[] arrayIndexToMatrixIndex(int arrInd, int rowNum, int colNum) {
        return new int[] {arrInd / colNum, arrInd - arrInd / colNum * colNum};
    }
}