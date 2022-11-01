/*
Ферма
https://acm.timus.ru/problem.aspx?space=1&num=1349
*/

#include <math.h>
#include <string.h> 
#include <stdio.h>

int main()
{
	int a, b, c, n;
	scanf("%d", &n);
	for (a = 1; a < 100; a++)
	{
		for (b = 1; b < 100; b++)
		{
			for (c = 1; c < 100; c++)
			{
				if (pow((double)a, n) + pow((double)b, n) == pow((double)c, n) && a != b && b != c && a != c)
				{
					printf("%d %d %d", a, b, c);
					return 0;
				}
			}
		}
	}
	printf("%d", -1);	
	return 0;
}