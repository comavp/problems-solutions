/*
SMS-спам
https://acm.timus.ru/problem.aspx?space=1&num=1567
*/

#include <string.h> 
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int answer = 0;
	char sms[1001];
	char str1[] = "adgjmpsvy. ";
	char str2[] = "behknqtwz,";
	char str3[] = "cfilorux!";

	gets(sms);
	for (int i = 0; i < strlen(sms); i++)
	{
		if (strchr(str1, sms[i]))
			answer++;
		if (strchr(str2, sms[i]))
			answer += 2;
		if (strchr(str3, sms[i]))
			answer += 3;
	}
	printf("%d", answer);
	
	return 0;
}