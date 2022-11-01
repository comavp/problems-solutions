/*
Спираль
https://acm.timus.ru/problem.aspx?space=1&num=1224
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
	long long n , m;
	cin >> n >> m;
	if (m >= n)
		cout << 2 * (n - 1);
	else
		cout << 2 * (m - 1) + 1;
	return 0;
}