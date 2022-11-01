/*
Трудности локализации
https://acm.timus.ru/problem.aspx?space=1&num=1785
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);	
	if (n >= 1000)
		printf("legion");
	if (n <= 999 && n >= 500)
		printf("zounds");
	if (n <= 499 && n >= 250)
		printf("swarm");
	if (n <= 249 && n >= 100)
		printf("throng");
	if (n <= 99 && n >= 50)
		printf("horde");
	if (n <= 49 && n >= 20)
	        printf("lots");
	if (n <= 19 && n >= 10)
		printf("pack");
	if (n <= 9 && n >= 5)
		printf("several");
	if (n <= 4 && n >= 1)
		printf("few");
		
	return 0;
}