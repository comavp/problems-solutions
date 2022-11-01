/*
Очередной пробный тур
https://acm.timus.ru/problem.aspx?space=1&num=2035
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main()
{
	long long x, y, c, dif;
	cin >> x >> y >> c;
	if (x + y < c)
	{
		cout << "Impossible";
		return 0;
	}
	dif = x + y - c;
	if (dif > x)
	{
		dif = dif - x;
		x = 0;
	}
	else
	{
		x = x - dif;
		dif = 0;
	}
	y -= dif;
	cout << x << " " << y;
	return 0;
}