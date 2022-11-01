/*
Сумма
https://acm.timus.ru/problem.aspx?space=1&num=1068
*/

#include <stdio.h>
int main()
{
	int N, answer = 0;
	scanf("%d", &N);
	if (N > 0)
		printf("%d", (1 + N)*N/2);
	else
	{
		for (; N <= 1; ++N)
		{
			answer += N;
		}			
		printf("%d", answer);
	}
	
	return 0;
}