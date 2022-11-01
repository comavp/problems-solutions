/*
Работа в команде
https://acm.timus.ru/problem.aspx?space=1&num=1581
*/

#include <stdio.h>

int main()
{
	int N, count = 1;
	int seq[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &seq[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (i < N - 1 && seq[i] == seq[i + 1])
			count++;
		else
		{
			printf("%d %d ", count, seq[i]);
			count = 1;
		}
			
	}
	
	return 0;
}