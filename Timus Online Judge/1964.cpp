/*
Китайский язык
https://acm.timus.ru/problem.aspx?space=1&num=1964
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
	int n, k, ans;
	cin >> n >> k >> ans;
	for (int i = 1; i < k; i++)
	{
		int y;
		cin >> y;
		if (ans + y <= n)
			ans = 0;
		else
			ans = ans + y - n;
	}
	cout << ans;
	return 0;
}