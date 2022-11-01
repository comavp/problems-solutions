/*
Алиса и Боб на велосипедах
https://acm.timus.ru/problem.aspx?space=1&num=2105
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	int L, T, Va, Vb, n, tA = 0, tB = 0;
	int squ[3];
	scanf("%d", &L);
	scanf("%d", &T);
	tA = T;
	tB = T;
	scanf("%d", &Va);
	scanf("%d", &Vb);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &squ[0]);
		scanf("%d", &squ[1]);
		scanf("%d", &squ[2]);
		if (squ[0] == 1)
			tA -= squ[2];
		else
			tB -= squ[2];
	}	
	printf("%d", (tA * Va  + tB * Vb) / L);
	
	return 0;
}