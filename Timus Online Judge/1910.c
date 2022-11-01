/*
Руины титанов: сокрытый вход
https://acm.timus.ru/problem.aspx?space=1&num=1910
*/

#include <stdio.h>

int main()
{
	int n, sum = 0, avr;
	int wals[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &wals[i]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (sum <= wals[i] + wals[i - 1] + wals[i + 1])
		{
			sum = wals[i] + wals[i - 1] + wals[i + 1];
			avr = i;
		}
	}
	printf("%d %d", sum, avr + 1);

	return 0;	
}