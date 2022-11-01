/*
Отличная команда
https://acm.timus.ru/problem.aspx?space=1&num=1931
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
#include<queue>
#include<functional>
#include<string>
#include<set>

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
	int n, max = 0;
	cin >> n;
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first;
		p[i].second = 0;
	}
	for (int i = 1, cur = 0; i < n; i++)
	{
		p[i].second++;
		p[cur].second++;
		if (p[i].first < p[cur].first)
			cur = i;		
	}
	for (int i = 0; i < n; i++)
	{
		if (p[max].second < p[i].second)
			max = i;
	}
	cout << max + 1;
	return 0;
}

