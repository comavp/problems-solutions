/*
Миша и криптография
https://acm.timus.ru/problem.aspx?space=1&num=2102
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	long long n;
	int i = 2, count = 0;
	scanf("%lld", &n);
	long long key = 5000000;
	while (n != 1 && i < key)
	{
		if (count == 20)
		{
			printf("No");
			return 0;
		}			
		if (n % i == 0)
		{
			count++;
			n = n / i; 
		}
		else
			i++;
	}
	if (count == 19 && i >= key)
		count++;
	if (count == 20)
		printf("Yes");
	else
		printf("No");
	
	return 0;
}