/*
Одномерный лабиринт
https://acm.timus.ru/problem.aspx?space=1&num=1642
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
	int n, x, arr[100], min = -1001, max = 1001;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;
		if (c <= max && c > 0)
			max = c;
		if (c >= min && c < 0)
			min = c;
	}
	
	if ((x > max && x > 0) || (x < 0 && x < min))
	{
		cout << "Impossible";
	}
	else
	{
		if (x > 0)
		{
			max = x;
			min = -min * 2 + x;
			cout << max << " " << min;
		}
		if (x < 0)
		{
			max = -x + max * 2;
			min = -x;
			cout << max << " " << min;
		}
	}
	return 0;
}