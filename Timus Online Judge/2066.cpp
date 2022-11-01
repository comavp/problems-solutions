/*
Простое выражение
https://acm.timus.ru/problem.aspx?space=1&num=2066
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (b == 0 || c == 0 || b == 1 || c == 1)
		cout << a - b - c;
	else
		cout << a - b * c;

	return 0;
}