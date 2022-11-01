/*
Укроп
https://acm.timus.ru/problem.aspx?space=1&num=1731
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{	
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= m; i++)
	{
		cout << i * n + 1 << " ";
	}
	return 0;
}
