/*
Четыре чертёнка
https://acm.timus.ru/problem.aspx?space=1&num=1924
*/

#include <stdio.h>

int main()
{
	int n, answer = 0;
	scanf("%d", &n);
	for (int i = 1; i <=
		n; i++)
	{
		answer += i;
		i++;
		if (i > n)
			break;
		answer -= i;
		i++;
		if (i > n)
			break;
		answer += i;
	}
	if (answer % 2 == 0)
		printf("black");
	else
		printf("grimy");
	
	return 0;	
}