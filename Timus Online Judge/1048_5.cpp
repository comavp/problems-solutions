/*
Сверхдлинные суммы
https://acm.timus.ru/problem.aspx?space=1&num=1048
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
	int n;	
	scanf("%d", &n);	
	vector<int> a(n + 1), b(n + 1);
	int min = 1;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	for (int i = n; i > 0; i--)
	{
		int sum = a[i] + b[i];
		a[i] = sum % 10;
		a[i - 1] += sum / 10;
	}
	if (a[0] == 1) min--;
	for (int i = min; i <= n; i++)
	{
		printf("%d", a[i]);
	}		
	return 0;
}
