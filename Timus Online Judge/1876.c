/*
Утро сороконожки
https://acm.timus.ru/problem.aspx?space=1&num=1876
*/

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (2 * a + 39 > 2 * b + 40)
		printf("%d", 2 * a + 39);
	else
		printf("%d", 2 * b + 40);
	
	return 0;
}