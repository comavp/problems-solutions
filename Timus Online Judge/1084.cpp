/*
Пусти козла в огород
https://acm.timus.ru/problem.aspx?space=1&num=1084
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
#include<map>
#include<iomanip>

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
	double a, r;
	double const pi = 3.14159265359;
	cin >> a >> r;
	if (2 * r <= a)
	{
		cout << fixed << setprecision(3) << pi * r * r << endl;
	}
	else
	{
		if (a * a <= 2 * r * r)
		{
			cout << fixed << setprecision(3) << a * a << endl;
		}
		else
		{
			double al = 2 * acos(a / (2 * r));
			double x = 4 * (r * r / 2 * (al - sin(al)));
			cout << fixed << setprecision(3) << pi * r * r - 4 * (r * r / 2 * (al - sin(al)));
		}
	}
	return 0;
}

