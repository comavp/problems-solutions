/*
Шифровка
https://acm.timus.ru/problem.aspx?space=1&num=1654
*/

#include <string.h> 
#include <stdio.h>

char stack[200001] = {0};
int head = 0;

void push(char x)
{
	stack[head] = x;
	head++;
}

void pop()
{
	head--;
	stack[head] = 0;
}

int main()
{
	char arr[200001];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (head == 0)
		{
			push(arr[i]);
			continue;
		}

		if (stack[head - 1] == arr[i])
		{
			pop();
		}
		else
		{
			push(arr[i]);
		}
	}
	printf("%s", stack);
	
	return 0;
}