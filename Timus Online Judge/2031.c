/*
Числа-перевёртыши
https://acm.timus.ru/problem.aspx?space=1&num=2031
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("01");
	}		
	else
	{
		if (n == 2)
		{
			printf("11 01");
		}			
		else
		{
			if (n == 3)
			{
				printf("16 06 68");
			}			
			else
			{
				if (n == 4)
				{
					printf("16 06 68 88");
				}					
				else
				{
					printf("Glupenky Pierre");
				}
			}		
		}		
	}	

	return 0;
}