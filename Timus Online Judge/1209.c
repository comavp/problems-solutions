/*
1, 10, 100, 1000...
https://acm.timus.ru/problem.aspx?space=1&num=1209
*/

#include <math.h>
#include <stdio.h>

int main()
{
	int N, number[65535];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &number[i]);
	}
	for (int i = 0; i < N; i++)
	{
		double a = (1 + sqrt(8 * (double)number[i] - 7)) / 2;
		double b = ceil(a);
		if (a == b)
			printf("%d ", 1);
		else
			printf("%d ", 0);
	}	
	
	return 0;
}