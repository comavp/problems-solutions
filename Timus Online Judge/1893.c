/*
A380
https://acm.timus.ru/problem.aspx?space=1&num=1893
*/

#include <string.h> 
#include <stdio.h>

int main()
{
	char arr[4];
	scanf("%s", arr);
	if (strlen(arr) == 2)
	{
		if (arr[0] == '1' || arr[0] == '2')
		{
			if (arr[1] == 'A' || arr[1] == 'D')
				printf("window");
			else
				printf("aisle");
		}
		else
		{
			if (arr[1] == 'A' || arr[1] == 'F')
				printf("window");
			else
				printf("aisle");
		}
	}	
	else
	{
		if (arr[0] == '1' || (arr[0] == '2' && arr[1] == '0'))
		{
			if (arr[2] == 'A' || arr[2] == 'F')
					printf("window");
			else
					printf("aisle");			
		}
		else
		{
			if (arr[2] == 'B' || arr[2] == 'E' || arr[2] == 'F' || arr[2] == 'J')
				printf("neither");
			else
			{
				if (arr[2] == 'A' || arr[2] == 'K')
					printf("window");
				else
					printf("aisle");
			}
		}
	}
	
	return 0;
}