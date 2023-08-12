/*
Matrix Determinant
https://www.codewars.com/kata/52a382ee44408cea2500074c
*/

import java.io.*;
import java.util.*;

public class Matrix {
    
    private static int[][] getMinorFromMatrix(int[][] matrix, int row, int column) {
        final int size = matrix.length;
        final int[][] minor = new int[size - 1][size - 1];
        for (int i = 0, mi = 0; i < size; i++) {
            if (i != row) {
                for (int j = 0, mj = 0; j < size; j++) {
                    if (j != column) {
                        minor[mi][mj] = matrix[i][j];
                        mj++;
                    }
                }
                mi++;
            }
        }

        return minor;
    }

    public static int determinant(int[][] matrix) {
        if (matrix.length == 1) {
            return matrix[0][0];
        }

        final Stack<int[][]> stackOfMinors = new Stack<>();
        final Stack<Integer> stackOfConstants = new Stack<Integer>();
        stackOfMinors.add(matrix);

        int det = 0;

        while(!stackOfMinors.isEmpty()) {
            final int[][] currentMinor = stackOfMinors.pop();
            final int currentSize = currentMinor.length;
            if (currentSize == 2) {
                int tmp = currentMinor[0][0] * currentMinor[1][1] - currentMinor[0][1] * currentMinor[1][0];
                if (!stackOfConstants.isEmpty()) {
                    tmp *= stackOfConstants.pop();
                }
                det += tmp;
            } else {
                final Integer previousConstant = stackOfConstants.isEmpty() ? null : stackOfConstants.pop();
                for (int i = 0; i < currentSize; i++) {
                    final int[][] newMinor = getMinorFromMatrix(currentMinor, 0, i);
                    final int newConstant = previousConstant == null ? currentMinor[0][i] * (int)Math.pow(-1, i)
                            : currentMinor[0][i] * (int)Math.pow(-1, i) * previousConstant;
                    stackOfMinors.add(newMinor);
                    stackOfConstants.add(newConstant);
                }
            }
        }

        return det;
    }
}