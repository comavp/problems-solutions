/*
Развод семи гномов
https://acm.timus.ru/problem.aspx?space=1&num=1243
*/

#include <stdio.h>

int main()
{
	char a = '0';
	int answer, b = 0;
	scanf("%c", &a);
	while(a != '\n')
	{
		answer = (b * 10 + a - 48) % 7;
		b = answer;
		scanf("%c", &a);
	} 	
	printf("%d", answer);
	
	return 0;
}