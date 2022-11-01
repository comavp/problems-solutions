/*
Танцы синуса
https://acm.timus.ru/problem.aspx?space=1&num=1149
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

void printA(int j)
{
	for (int i = 1; i <= j; i++)
	{
		cout << "sin(" << i;
		if (i != j)
		{
			if (i % 2)
				cout << "-";
			else
				cout << "+";
		}
	}
	for (int i = 1; i <= j; i++)
	{
		cout << ")";
	}
	return;
}

int main()
{
	init();	
	int n, k;
	cin >> n;
	k = n;
	for (int i = 2; i <= n; i++)
	{
		cout << "(";
	}
	for (int i = 1; i <= n && k > 0; i++, k--)
	{
		printA(i);
		cout << "+" << k;
		if (i != n)
			cout << ")";
	}
	return 0;
}
