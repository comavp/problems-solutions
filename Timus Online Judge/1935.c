/*
Слёзы утопленников
https://acm.timus.ru/problem.aspx?space=1&num=1935
*/

#include <stdio.h>

int main()
{
	int n, answer = 0;
	int a[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			answer += 2 * a[i];
		else
		{
			if (a[i - 1] < a[i])
				answer += 2 * a[i] - a[i - 1];
			else
				answer += a[i];
		}
	}
	printf("%d", answer);

	return 0;
}