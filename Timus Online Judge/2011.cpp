/*
Длинное условие
https://acm.timus.ru/problem.aspx?space=1&num=2011
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
	int n, k1 = 0, k2 = 0, k3 = 0, k = 1, m = 1;
	cin >> n;	
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x == 1)
			k1++;
		if (x == 2)
			k2++;
		if (x == 3)
			k3++;
	}
	if (n > 5)
	{
		if (k1 * k2 != 0 || k1 * k3 != 0 || k3 * k2 != 0)
			cout << "Yes";
		else
			cout << "No";
	}
	else
	{
		for (int i = 1; i <= k1; i++)
			k *= i;
		for (int i = 1; i <= k2; i++)
			k *= i;
		for (int i = 1; i <= k3; i++)
			k *= i;
		for (int i = 1; i <= n; i++)
			m *= i;
		if (m / k >= 6)
			cout << "Yes";
		else
			cout << "No";
	}
	return 0;
}