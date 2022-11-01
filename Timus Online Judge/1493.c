/*
В одном шаге от счастья
https://acm.timus.ru/problem.aspx?space=1&num=1493
*/

#include <math.h>
#include <stdio.h>

int main()
{
	int N[6], n, a1, b1, a2, b2;
	scanf("%d", &n);
	n = n + 1;
	for (int i = 5; i >= 0; i--)
	{
		N[i] = n % 10;
		n = n / 10;
	}
	a1 = N[0] + N[1] + N[2];
	b1 = N[3] + N[4] + N[5];
	for (int i = 5; i >= 0; i--)
	{
		n += N[i] * pow(10.0, 5 - i);
	}
	n = n - 2;
	for (int i = 5; i >= 0; i--)
	{
		N[i] = n % 10;
		n = n / 10;
	}
	a2 = N[0] + N[1] + N[2];
	b2 = N[3] + N[4] + N[5];
	if (a1 == b1 || a2 == b2)
		printf("Yes");
	else
		printf("No");

	return 0;
}