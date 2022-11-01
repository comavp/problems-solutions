/*
Код Хэмминга
https://acm.timus.ru/problem.aspx?space=1&num=1792
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main()
{
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a1 = (arr[1] + arr[2] + arr[3]) % 2 == arr[4];
	int a2 = (arr[0] + arr[2] + arr[3]) % 2 == arr[5];
	int a3 = (arr[0] + arr[1] + arr[3]) % 2 == arr[6];
	
	if (!a1 && !a2 && !a3)
		arr[3] = !arr[3];
	if (!a1 && !a2 && a3)
		arr[2] = !arr[2];
	if (!a1 && a2 && !a3)
		arr[1] = !arr[1];
	if (!a1 && a2 && a3)
		arr[4] = !arr[4];
	if (a1 && !a2 && !a3)
		arr[0] = !arr[0];
	if (a1 && !a2 && a3)
		arr[5] = !arr[5];
	if (a1 && a2 && !a3)
		arr[6] = !arr[6];
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}