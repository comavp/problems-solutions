/*
Сумма последовательных чисел
https://acm.timus.ru/problem.aspx?space=1&num=1120
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
#include<cmath>
#include<numeric>
#include<string.h>
#include <queue>
#include <functional>

using namespace std;

const string FILENAME = "";
const bool FILE_IO = 1;

void init()
{
#ifdef ONLINE_JUDGE
	if (!FILENAME.empty())
	{
		freopen((FILENAME + ".in").c_str(), "r", stdin);
		freopen((FILENAME + ".out").c_str(), "w", stdout);
	}
#else
	if (FILE_IO)
	{
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}
#endif
}


int main()
{
	init();
	int n;
	double a = 0;
	cin >> n;
	n *= 2;
	vector<int> p(0);
	for (int i = 1; i <= round(sqrt((double)n)); i++)
	{
		if (n % i == 0)
			p.push_back(i);
	}
	for (int i = p.size() - 1; i >= 0; i--)
	{
		a = (double)(n - p[i] * p[i] + p[i]) / (2 * p[i]);
		if ((int)a == a)
		{
			cout << (int)a << " " << p[i];
			return 0;
		}
	}
	return 0;
}
