/*
АнтиКАПС
https://acm.timus.ru/problem.aspx?space=1&num=1601
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
	string str, ans = "";
	bool end = true;
	char c = getchar();
	while (c != EOF)
	{
		if (c != '.' && c != ',' && c != '-' && c != ':' && c != '?' && c != '!' && c != ' ' && c != '\n')
		{
			if (!end)
			{
				c += 32;
			}
			else
			{
				end = false;
			}
		}
		else
		{
			if (c == '.' || c == '!' || c == '?')
				end = true;
		}
		ans += c;
		c = getchar();
	}
	cout << ans;
	return 0;
}
