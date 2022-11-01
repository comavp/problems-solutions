/*
йынтарбО кодяроп
https://acm.timus.ru/problem.aspx?space=1&num=1226
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
	string str, s = "";
	char c = 'a';
	bool flag = true;
	while (flag)
	{	
		if (scanf("%c", &c) != EOF)
		{
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				s += c;
			}
			else
			{
				reverse(s.begin(), s.end());
				str += s;
				str += c;
				s = "";
			}
		}
		else
		{
			reverse(s.begin(), s.end());
			str += s;
			s = "";
			flag = false;
		}
	}
	cout << str;
	return 0;
}
