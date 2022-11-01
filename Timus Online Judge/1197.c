/*
Один в поле воин
https://acm.timus.ru/problem.aspx?space=1&num=1197
*/

#include <stdio.h>
#include <string.h> 

int main()
{
	int N;
	char str[3];
	int answer[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);
		if (str[1] >= '3' && str[1] <= '6' && str[0] >= 'c' && str[0] <= 'f')
			answer[i] = 8;
		if (((str[0] == 'b' || str[0] == 'g') && str[1] >= '3' && str[1] <= '6') || ((str[1] == '7' || str[1] == '2') && str[0] >= 'c' && str[0] <= 'f'))
			answer[i] = 6;
		if (!strcmp(str, "b2\0") || !strcmp(str, "b7\0") || !strcmp(str, "g2\0") || !strcmp(str, "g7\0") || (str[0] == 'a' && str[1] >= '3' && str[1] <= '6') || (str[0] == 'h' && str[1] >= '3' && str[1] <= '6') || (str[1] == '1' && str[0] >= 'c' && str[0] <= 'f') || (str[1] == '8' && str[0] >= 'c' && str[0] <= 'f'))
			answer[i] = 4;
		if (!strcmp(str, "b1\0") || !strcmp(str, "a2\0") || !strcmp(str, "b8\0") || !strcmp(str, "a7\0") || !strcmp(str, "g8\0") || !strcmp(str, "h7\0") || !strcmp(str, "h2\0") || !strcmp(str, "g1\0"))
			answer[i] = 3;
		if (!strcmp(str, "a1\0") || !strcmp(str, "a8\0") || !strcmp(str, "h1\0") || !strcmp(str, "h8\0"))
			answer[i] = 2;
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", answer[i]);
	}
	
	return 0;	
}