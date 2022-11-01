/*
Иероглифы
https://acm.timus.ru/problem.aspx?space=1&num=1545
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char str[1000][4];
	char b;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		gets(str[i]);
	}	
	scanf("%c", &b);
	for (int i = 0; i <= n; i++)
	{
		if (str[i][0] == b)
		{
			puts(str[i]);
		}			
	}

	return 0;
}