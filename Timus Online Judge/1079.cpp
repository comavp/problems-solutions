/*
Максимум
https://acm.timus.ru/problem.aspx?space=1&num=1079
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main(void)
{
	int j = -1, n[10], A[100000] = { 0, 1 }, max = 1;
	do
	{
		j++;
		cin >> n[j];
	} while (n[j]);
	j = 0;
	while (n[j])
	{
		for (int i = 2; i <= n[j]; i++)
		{
			if (i % 2 == 0)
				A[i] = A[i / 2];
			else
				A[i] = A[(i - 1) / 2] + A[(i - 1) / 2 + 1];
			if (A[i] >= max)
				max = A[i];
		}
		cout << max << endl;
		j++;
		max = 1;
	}
	return 0;
}