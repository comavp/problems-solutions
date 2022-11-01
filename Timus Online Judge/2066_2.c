/*
Простое выражение
https://acm.timus.ru/problem.aspx?space=1&num=2066
*/

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (b == 0 || c == 0 || b == 1 || c == 1)
		printf("%d", a - b - c);
	else
		printf("%d", a - b * c);
	
	return 0;
}