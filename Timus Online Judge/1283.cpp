/*
Гномик
https://acm.timus.ru/problem.aspx?space=1&num=1283
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
	double a, b, c;
	int age = 0;
	cin >> a >> b >> c;
	while (a > b)
	{
		a -= a / 100 * c;
		age++;
	}
	cout << age;
	return 0;
}