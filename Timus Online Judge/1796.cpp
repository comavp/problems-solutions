/*
Парк аттракционов
https://acm.timus.ru/problem.aspx?space=1&num=1796
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
	vector<int> p(6), a(0);
	int n, sum1 = 0, sum2 = 0, x = 10, count = 0;
	for (int i = 0; i < p.size(); i++)
	{
		cin >> p[i];	
		sum1 += p[i] * x;
		x *= ((i % 2 == 0) ? 5 : 2);
	}	
	cin >> n;
	x = 10;
	for (int i = 0; i < p.size(); i++)
	{		
		if (p[i] > 0)
		{
			sum2 = sum1 - x;
			break;
		}
		x *= (i % 2 == 0) ? 5 : 2;
	}
	x = (sum2 / n + 1) * n;
	for (int i = x; i <= sum1; i += n)
	{
		a.push_back(i / n);
		count++;
	}
	cout << count << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
