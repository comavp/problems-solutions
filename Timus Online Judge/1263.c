/*
Выборы
https://acm.timus.ru/problem.aspx?space=1&num=1263
*/

#include <stdio.h>

int main()
{
	int N, M, per;
	int arrN[10000];
	scanf("%d", &N);
	scanf("%d", &M);
        for (int i = 0; i < N; i++)
                arrN[i] = 0;
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &per);
		arrN[per - 1]++;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%0.2f%%\n", (double)arrN[i] * 100 / (double)M);
	}
	
	return 0;
}