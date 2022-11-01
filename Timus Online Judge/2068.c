/*
Игра с орехами
https://acm.timus.ru/problem.aspx?space=1&num=2068
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int n, m, x = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i ++ )
	{
		scanf("%d", &m);
		x += (m - 1) / 2;
	}
	if (x % 2 == 0)
		printf("Stannis");
	else
		printf("Daenerys");

	return 0;
}