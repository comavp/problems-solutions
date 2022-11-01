/*
Произведение цифр
https://acm.timus.ru/problem.aspx?space=1&num=1014
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
	long long n, p = 1, q = 0;
	cin >> n;
	if (n == 0)
	{
		cout << 10;
		return 0;
	}
	if (n == 1)
	{
		cout << 1;
		return 0;
	}
	for (int i = 9; i > 1 && n > 1; i--)
	{
		while (n % i == 0)
		{
			q += p * i;
			p *= 10;
			n /= i;
		}
	}
	if (n > 1)
		cout << -1;
	else
		cout << q;
	return 0;
}
