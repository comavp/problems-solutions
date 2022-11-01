/*
Stripies
https://acm.timus.ru/problem.aspx?space=1&num=1161
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
	double cur;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++)
		cin >> p[i];
	sort(p.begin(), p.end());
	cur = (double)p[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		double x = (double)p[i];
		cur = 2 * sqrt(x * cur);
	}
	printf("%0.2f", cur);
	return 0;
}
