/*
Куча камней
https://acm.timus.ru/problem.aspx?space=1&num=1005
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
	int n, m, mina = INT_MAX;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	m = 1 << n;
	for (int i = 0; i < m; i++)
	{
		int suma = 0, sumb = 0, k = i;
		for (int j = 0; j < n; j++)
		{
			if ((k & 1) > 0)
				suma += p[j];
			else
				sumb += p[j];
			k >>= 1;
		}
		mina = min(mina, abs(sumb - suma));
	}
	cout << mina;
	return 0;
}
