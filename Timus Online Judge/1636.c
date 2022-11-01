/*
Штрафное время
https://acm.timus.ru/problem.aspx?space=1&num=1636
*/

#include <stdio.h>

int main()
{
	int q, z, number;	
	scanf("%d", &q);
	scanf("%d", &z);
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &number);
		z -= 20 * number;
	}
	if (z >= q)
		printf("No chance.");
	else
		printf("Dirty debug :(");
	
	return 0;
}