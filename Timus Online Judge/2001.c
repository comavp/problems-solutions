/*
Математики и ягоды
https://acm.timus.ru/problem.aspx?space=1&num=2001
*/

#include <stdio.h>

int main()
{
	int a1, b1, a2, b2, a3, b3;
	scanf("%d", &a1);
	scanf("%d", &b1);
	scanf("%d", &a2);
	scanf("%d", &b2);
	scanf("%d", &a3);
	scanf("%d", &b3);
	printf("%d %d", a1 - a3, b1 - b2);
	
	return 0;	
}