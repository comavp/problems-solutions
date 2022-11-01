/*
Про Гришу Н.
https://acm.timus.ru/problem.aspx?space=1&num=2012
*/

#include <stdio.h>

int main()
{
	int f;
	scanf("%d", &f);
	if ((12 - f) * 45 + 60 <= 300)
		printf("YES");
	else
		printf("NO");	
	return 0;	
}