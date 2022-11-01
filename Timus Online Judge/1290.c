/*
Саботаж
https://acm.timus.ru/problem.aspx?space=1&num=1290
*/

#include <locale.h> 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int arr[25000];
void qsort(int b, int e)
{
	int l = b; int r = e;
	int piv = arr[(l + r) / 2];
	while (l <= r)
	{
		while (arr[l] < piv)
			l++;
		while (arr[r] > piv)
			r--;
		if (l <= r)
		{
			int c = arr[l];
			arr[l] = arr[r];
			arr[r] = c;
			l++; r--;
		}		
	}
	if (b < r)
		qsort(b, r);
	if (e > l)
		qsort(l, e);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(0, n - 1);
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}