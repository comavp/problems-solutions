/*
О заслуге британских учёных
https://acm.timus.ru/problem.aspx?space=1&num=1925
*/

#include <stdio.h>

int main()
{
	int n, k, sum1 = 0, sum2 = 0, answer = 0;
	int a1[100], a2[100];
	scanf("%d", &n);
	scanf("%d", &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a1[i]);
		scanf("%d", &a2[i]);
		sum1 += a1[i];
		sum2 += a2[i];
	}
	sum1 += k;
	answer = sum1 - 2 * (n + 1) - sum2;
	if (answer >= 0)
		printf("%d", answer);
	else
		printf("Big Bang!");
	
	return 0;
}