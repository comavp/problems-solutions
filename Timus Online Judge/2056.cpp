/*
Стипендия
https://acm.timus.ru/problem.aspx?space=1&num=2056
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main()
{
	int n, m;
	double av = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m == 3)
		{
			cout << "None";
			return 0;
		}
		av += m;
	}
	av = av / (double)n;
	if (av == 5)
	{
		cout << "Named";
	}
	else
	{
		if (av >= 4.5)
		{
			cout << "High";
		}
		else
		{
			cout << "Common";
		}
	}
	return 0;
}