/*
Битва у болота
https://acm.timus.ru/problem.aspx?space=1&num=1991
*/

#include <stdio.h>

int main()
{
	int n, k, bums = 0, droids = 0, a;
	scanf("%d", &n);
	scanf("%d", &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a <= k)
			droids += k - a;
		else
			bums += a - k;
	}
	printf("%d %d", bums, droids);
	
	return 0;
}
