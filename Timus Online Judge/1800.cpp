/*
Закон бутерброда
https://acm.timus.ru/problem.aspx?space=1&num=1800
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
#include<list>
#include<stack>

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
	double t, l, h, w, n;
	const double g = 9.81;
	cin >> l >> h >> w;
	l /= 100;
	h /= 100;
	w /= 60;
	if (l / 2.0 > h)
	{
		cout << "butter" << endl;
	}
	else
	{
		t = sqrt(2.0 * (h - l / 2) / g);
		n = w * t;
		n -= (int)n;
		if (n <= 0.25 || n >= 0.75)
			cout << "butter" << endl;
		else
			cout << "bread" << endl;
	}
	return 0;
}

