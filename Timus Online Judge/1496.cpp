/*
Спамер
https://acm.timus.ru/problem.aspx?space=1&num=1496
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

struct 
{
	char name[31];
	int number;
}arr[101] = {0 , 0};

int Is(char *str, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(arr[i].name, str) == 0)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n, j, size = 0;
	char str[31];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		j = Is(str, n);
		if (j != -1)
		{
			arr[j].number++;
		}
		else
		{
			strcpy(arr[size].name, str);
			arr[size].number++;
			size++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i].number > 1)
			printf("%s\n", arr[i].name);
	}

	return 0;
}