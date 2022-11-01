/*
Таблица результатов
https://acm.timus.ru/problem.aspx?space=1&num=1100
*/

#include <stdio.h>

int arr[150000][2];

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	
	for (int i = 100; i >= 0; i--)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j][1] == i)
			{
				printf("%d %d\n", arr[j][0], arr[j][1]);
			}
		}
	}
	
	return 0;
}