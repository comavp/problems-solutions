/*
Шоколад 2
https://acm.timus.ru/problem.aspx?space=1&num=1639
*/

#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	if (n * m % 2 == 0)
		printf("[:=[first]");
	else
		printf("[second]=:]");
	
	return 0;	
}