/*
Кондукторы
https://acm.timus.ru/problem.aspx?space=1&num=1011
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
	bool flag = false;
	double p, q, const eps = 0.000000001;
	long long x = 2, y = 1;
	cin >> p >> q;
	for (; x <= 100 * y / (q - eps) || x >= 100 * y / (p + eps); x++)
	{
		y = 1;
		for (; y <= x; y++)
		{
			if (100 * y / (q - eps) < x && x < 100 * y / (p + eps))
			{				
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	cout << x;
	return 0;
}
