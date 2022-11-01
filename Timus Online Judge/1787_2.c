/*
Поворот на МЕГУ
https://acm.timus.ru/problem.aspx?space=1&num=1787
*/

#include <stdio.h>

int main()
{
	int k, n, answer = 0, a;
	scanf("%d", &k);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		answer += a - k;
		if (answer < 0)
			answer = 0;
	}
	printf("%d", answer);
	
	return 0;	
}