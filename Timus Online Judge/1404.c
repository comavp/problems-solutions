/*
Легко взломать!
https://acm.timus.ru/problem.aspx?space=1&num=1404
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	scanf("%s", str);
	for (int i = strlen(str) - 1; i > 0; i--)
	{
		if (str[i] - str[i - 1] >= 0)
			str[i] = str[i] - str[i - 1] + 97;
		else
			str[i] = str[i] + 26 - str[i - 1] + 97;
	}
	if (str[0] - 97 - 5 >= 0)
		str[0] = str[0] - 5;
	else
		str[0] = str[0] + 26 - 5;
	printf("%s", str);
	
	return 0;
}