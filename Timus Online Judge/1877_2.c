/*
Велосипедные коды
https://acm.timus.ru/problem.aspx?space=1&num=1877
*/

#include <stdio.h>

int main()
{
	int first_code;
	int second_code;
	scanf("%d", &first_code);
	scanf("%d", &second_code);
	if (first_code % 2 == 0 || second_code % 2 != 0)
		printf("yes");
	else
		printf("no");
	
	return 0;
}