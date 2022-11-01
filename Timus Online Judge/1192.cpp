/*
Мячик во сне
https://acm.timus.ru/problem.aspx?space=1&num=1192
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
	double const pi = 3.1415926535, g = 10;
	double v, a, k, x = 0;
	cin >> v >> a >> k;
	v *= v;
	a *= 2;
	while (v > 0.0001)
	{
		x += v * sin(pi * a / 180) / g;
		v /= k;
	}
	printf("%0.2f", x);
}