/*
Степень
https://acm.timus.ru/problem.aspx?space=1&num=1110
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	long long n, m, y, x, result = 1, flag = 1;
	scanf("%lld %lld %lld", &n, &m, &y);
	for (x = 0; x <= m - 1; x++)
	{
		for (int i = 1; i <= n; i++)
		{
			result *= x;
			result %= m;
		}
		if (result == y)
		{
			printf("%d ", x);
			flag = 0;
		}
		result = 1;
	}
	if (flag)
		printf("%d", -1);
	return 0;
}