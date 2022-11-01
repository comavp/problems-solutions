/*
Обратный корень
https://acm.timus.ru/problem.aspx?space=1&num=1001
*/

#include <stdio.h>
#include <math.h>

long long arr[131072];
int i = 0;

int main()
{	
	while (scanf("%lld", &arr[i]) != EOF) {
		i++;
	}
	i--;
	for (; i > -1; i--)
	{
                printf("%.4f\n", sqrt((double)arr[i]));
	}
	
	return 0;
}