/*
Собственные числа Psych Up
https://acm.timus.ru/problem.aspx?space=1&num=1880
*/

#include <stdio.h>

int main()
{
	int n1, n2, n3, answer = 0, k = 0;
	int array1[4000], array2[4000];
	scanf("%d", &n1);
	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &array1[i]);
	}
	scanf("%d", &n2);
	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &array2[i]);
		for (int j = 0; j < n1; j++)
		{
			if (array2[i] == array1[j])
			{
				array2[k] = array1[j];
				k++;
			}
		}
	}
	scanf("%d", &n3);
	for (int i = 0; i < n3; i++)
	{
		scanf("%d", &array1[i]);
		for (int j = 0; j < k; j++)
		{
			if (array1[i] == array2[j])
			{
				answer++;
			}
		}
	}
	printf("%d", answer);
	
	return 0;	
}