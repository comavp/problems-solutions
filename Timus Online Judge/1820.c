/*
Уральские бифштексы
https://acm.timus.ru/problem.aspx?space=1&num=1820
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n, k, time = 0;	
	scanf("%d", &n);
	scanf("%d", &k);
	if (n < k)
		time = 2;
	else
		time = ceil((double)n * 2 / k);
	printf("%d", time);
	
	return 0;
}