/*
Такси
https://acm.timus.ru/problem.aspx?space=1&num=1607
*/

#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	if (a >= c)
	{
		printf("%d", a);
		return 0;
	}
	while (1)
	{
		a += b;
		if (a >= c)
		{
			printf("%d", c);
			return 0;
		}
		c -= d;
		if (a >= c)
		{
			printf("%d", a);
			return 0;
		}
	}
}