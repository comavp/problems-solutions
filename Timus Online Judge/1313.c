/*
К вопросу о спорте
https://acm.timus.ru/problem.aspx?space=1&num=1313
*/

#include <stdio.h>
int main()
{
	int N, i, j;
	int screen[100][100];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &screen[i][j]);
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", screen[i - j][j]);
		}			
	}

	for (i = N; i < 2 * N - 1; i++)
	{
		for (j = N - 1; j >= i - N + 1; j--)
		{
			printf("%d ", screen[j][i - j]);
		}
	}
	
	return 0;
}