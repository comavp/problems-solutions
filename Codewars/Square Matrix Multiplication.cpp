/*
Square Matrix Multiplication
https://www.codewars.com/kata/5263a84ffcadb968b6000513
*/

#include <vector>

std::vector<std::vector<int>> matrix_multiplication(std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b, size_t n){
	std::vector<std::vector<int>> c(n, std::vector<int>(n, 0));
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				c[k][i] += a[k][j] * b[j][i];
			}
		}
	}
	return c;
}