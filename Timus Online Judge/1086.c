/*
Криптография
https://acm.timus.ru/problem.aspx?space=1&num=1086
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{	
	const int n = 163842, m = 15001;
	int k;
	int *arr = NULL, *answer = NULL, *px = NULL;
	scanf("%d", &k);	
	arr = (int*)malloc(n * sizeof(int));
	answer = (int*)malloc(m * sizeof(int));
	px = (int*)malloc(k * sizeof(int));
	
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &px[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
			arr[i] = 1;
	}
	arr[0] = 0;	
	for (long long i = 2; i <= n; i++)
	{
		if (arr[i - 1])
		{
			for (long long j = i * i; j <= n; j += i)
			{
				arr[j - 1] = 0;
			}
		}

	}
	
	for (int i = 0, j = 0; i < n; i++)
	{
		if (arr[i])
		{
			answer[j] = i + 1;
			j++;
		}
	}	
	
	for (int i = 0; i < k; i++)
	{
		printf("%d\n", answer[px[i] - 1]);
	}

	free(arr);
	free(answer);
	free(px);
	
	return 0;
}