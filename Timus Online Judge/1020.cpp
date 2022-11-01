/*
Ниточка
https://acm.timus.ru/problem.aspx?space=1&num=1020
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

double d(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
int main()
{
	init();
	const double Pi = 3.14;
	int n;
	double r, answer = 0;
	cin >> n >> r;
	vector<pair<double, double>> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			answer += d(p[i].first, p[i].second, p[i + 1].first, p[i + 1].second);			
		}
		else
		{
			answer += d(p[0].first, p[0].second, p[n - 1].first, p[n - 1].second) + 2 * Pi * r;
		}
	}
	printf("%.2f", answer);
	return 0;
}
