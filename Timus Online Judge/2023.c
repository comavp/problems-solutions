/*
Дональд-почтальон
https://acm.timus.ru/problem.aspx?space=1&num=2023
*/

#include <stdio.h>

int main()
{
	int n, place = 1, answer = 0;;
	char name[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", name);
		if (place == 1)
		{
			if (name[0] == 'A' || name[0] == 'P' || name[0] == 'O' || name[0] == 'R')
			{
				continue;
			}
			else
			{
				if (name[0] == 'B' || name[0] == 'M' || name[0] == 'S')
				{
					answer++;
					place = 2;
					continue;
				}
				else
				{
					answer += 2;
					place = 3;
					continue;
				}
			}
		}
		if (place == 2)
		{
			if (name[0] == 'B' || name[0] == 'M' || name[0] == 'S')
			{
				continue;
			}
			else
			{
				if (name[0] == 'A' || name[0] == 'P' || name[0] == 'O' || name[0] == 'R')
				{
					answer++;
					place = 1;
					continue;
				}
				else
				{
					answer++;
					place = 3;
					continue;
				}
			}
		}
		if (place == 3)
		{
			if (name[0] == 'D' || name[0] == 'G' || name[0] == 'J' || name[0] == 'K' || name[0] == 'T' || name[0] == 'W')
			{
				continue;
			}
			else
			{
				if (name[0] == 'A' || name[0] == 'P' || name[0] == 'O' || name[0] == 'R')
				{
					answer += 2;
					place = 1;
					continue;
				}
				else
				{
					answer++;
					place = 2;
					continue;
				}
			}
		}
	}
	printf("%d", answer);
	
	return 0;
}
