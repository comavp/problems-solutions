/*
Пингвины
https://acm.timus.ru/problem.aspx?space=1&num=1585
*/

#include <stdio.h>

int main()
{
	int N, E = 0, M = 0, L = 0;
	char str[20];
	scanf("%d", &N);
	for (int i = 0; i <= N; i++)
	{
		gets(str);
		if (str[0] == 'E')
			E++;
		if (str[0] == 'M')
			M++;
		if (str[0] == 'L')
			L++;		
	}

	if (E > M)
	{
		if (E > L)
			printf("Emperor Penguin");
		else
			printf("Little Penguin");
	}
	else
	{
		if (M > L)
			printf("Macaroni Penguin");
		else
			printf("Little Penguin");
	}
	
	return 0;
}