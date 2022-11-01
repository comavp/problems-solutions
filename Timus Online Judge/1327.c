/*
Предохранители
https://acm.timus.ru/problem.aspx?space=1&num=1327
*/

#include <stdio.h>

int main()
{
	int A, B, answer = 0;
	scanf("%d", &A);
	scanf("%d", &B);
	for (int i = A; i <= B; i++)
	{		
		if (i % 2 != 0)
			answer++;
	}
	printf("%d", answer);
	
	return 0;
}
