/*
Отель
https://acm.timus.ru/problem.aspx?space=1&num=1319
*/

#include <stdio.h>

int main()
{
	int n, x = 1, k = 0, key;
	int a[100][100];
	scanf("%d", &n);
	key = 2 * (n - 1);
	do
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i + j == k)
				{
					a[i][j] = x;
					x++;
				}
			}
		}
		k++;
	}
	while (key >= k);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > -1; j--)
		{
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}