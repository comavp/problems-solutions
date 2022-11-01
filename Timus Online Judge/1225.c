/*
Флаги
https://acm.timus.ru/problem.aspx?space=1&num=1225
*/

#include <stdio.h>

int main()
{
	int N;
	long long notanswer = 0, answer = 2;
	scanf("%d", &N);
	for (int i = 1; i < N; i++)
	{
		long long c;
		c = answer;
		answer += notanswer;
		notanswer = c;
	}
	printf("%lld", answer);
	
	return 0;
}