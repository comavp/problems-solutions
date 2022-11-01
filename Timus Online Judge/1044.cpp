/*
Счастливые билеты
https://acm.timus.ru/problem.aspx?space=1&num=1044
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
	int n;
	cin >> n;
	if (n % 2 || n == 0)
	{
		cout << 0;
	}
	else
	{
		switch (n)
		{
		case 2:
			cout << 10;
			break;
		case 4:
			cout << 670;
			break;
		case 6:
			cout << 55252;
			break;
		case 8:
			cout << 4816030;
			break;
		}
	}
	return 0;
}