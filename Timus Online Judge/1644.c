/*
Куча орехов
https://acm.timus.ru/problem.aspx?space=1&num=1644
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main()
{
	int n, number = -1;
	int *arr1 = NULL, *arr2 = NULL;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("%d", 10);
		return 0;
	}
	arr1 = (int *)malloc(n * sizeof(int));
	arr2 = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		char str[10];
		scanf("%d", &arr1[i]);
		scanf("%s", str);
		if (str[0] == 'h')
			arr2[i] = 0;
		else
			arr2[i] = 1;
		if (n == 1 && str[0] == 'h')
		{
			printf("%d", 10);
			return 0;
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr1[j] >= arr1[j + 1])
			{
				int c1 = arr1[j], c2 = arr2[j];
				arr1[j] = arr1[j + 1]; arr2[j] = arr2[j + 1];
				arr1[j + 1] = c1; arr2[j + 1] = c2;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr2[i] == 1 && number == -1)
		{
			number = i;
			if (i >= 1 && arr1[i - 1] == arr1[i] && arr2[i - 1] == 0)
			{
				printf("Inconsistent\n");
				return 0;
			}
		}
		if (number != -1)
		{
			if (arr2[i] == 0)
			{
				printf("Inconsistent\n");
				return 0;
			}
		}
	}
	if (number == -1)
		printf("%d", 10);
	else
		printf("%d", arr1[number]);

	return 0;
}