/*
Длинное условие задачи
https://acm.timus.ru/problem.aspx?space=1&num=1881
*/

#include <stdio.h>

int main()
{
	int h, w, n, answer = 1, str = 0, len = 0;
	char word[10001];
	scanf("%d", &h);
	scanf("%d", &w);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", word);
		len += strlen(word);
		if (len > w)
		{
			len = strlen(word) + 1;
			str++;
		}
		else
			len++;
		if (str >= h)
		{
			str = 0;
			answer++;
		}			
	}
	printf("%d", answer);
	
	return 0;
}