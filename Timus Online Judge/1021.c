/*
Таинство суммы
https://acm.timus.ru/problem.aspx?space=1&num=1021
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int bin_search(int *arr1, int n1, int x)
{
	int l = 0, r = n1 - 1, m = 0;
	while (l <= r)
	{
		m = (l + r) / 2;
		if (arr1[m] + x == 10000)
			return m;
		else
		{
			if (arr1[m] + x > 10000)
				r = m - 1;
			else
				l = m + 1;
		}		
	}
	return -1;
}

int main()
{	
	int n1, n2;
	int *arr1 = NULL, *arr2 = NULL;
	scanf("%d", &n1);
	arr1 = (int *)malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &n2);
	arr2 = (int *)malloc(n2 * sizeof(int));
	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < n2; i++)
	{
		if (bin_search(arr1, n1, arr2[i]) != -1)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}