/*
Книжный червь
https://acm.timus.ru/problem.aspx?space=1&num=1638
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main()
{
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	if (a < b)
		cout << (b - a) * 2 * y + (b - a - 1) * x;
	else
		cout << (a - b) * 2 * y + (a - b + 1) * x;
	return 0;
}