/*
Экзамен по истории
https://acm.timus.ru/problem.aspx?space=1&num=1196
*/

#include <stdio.h>

int tlist[15000];

int b_search(int x, int size)
{
	int begin = 0;
	int end = size - 1;
	while (begin <= end)
	{
		int middle = (begin + end) / 2;
		if (x == tlist[middle])
			return 1;
		else
		{
			if (x < tlist[middle])
			{
				end = middle - 1;
			}
			else
			{
				begin = middle + 1;
			}
		}		
	}
	return 0;
}
int main()
{
	int N, M, x, answer = 0;	
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &tlist[i]);
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &x);
		if (b_search(x, N))
			answer++;		
	}
	printf("%d", answer);

	return 0;
}