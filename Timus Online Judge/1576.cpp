/*
Телефонные тарифы
https://acm.timus.ru/problem.aspx?space=1&num=1576
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
	int N1, N2, N3, T, C1, C2, n, sum = 0;
	cin >> N1 >> C1 >> N2 >> T >> C2 >> N3 >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		char c;
		cin >> x >> c >> y;
		if (x > 0)
		{
			if (y > 0)
				x++;
		}
		else
		{
			if (y > 6)
				x++;
		}
		sum += x;
	}
	printf("Basic:     %d\nCombined:  %d\nUnlimited: %d", N1 + C1 * sum, N2 + ((sum > T) ? sum - T : 0) * C2, N3);
	return 0; 
}