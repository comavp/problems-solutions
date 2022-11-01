/*
Демократия в опасности
https://acm.timus.ru/problem.aspx?space=1&num=1025
*/

#include <stdio.h>

int main()
{
	int K, answer = 0;
	int a[102];
	scanf("%d", &K);
	for (int i = 0; i < K; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < K - 1; i++)
	{
		for (int j = 0; j < K - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}
	K = K / 2 + 1;
	for (int i = 0; i < K; i++)
	{
		answer += a[i] / 2 + 1;
	}
	printf("%d", answer);
	
	return 0;
}
