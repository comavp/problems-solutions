/*
Книга Сандро
https://acm.timus.ru/problem.aspx?space=1&num=1723
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
#include<string>

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
	string str, maxstring;
	int max = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		string s = "";		
		for (int j = i; j < str.length(); j++)
		{
			int count = 0;
			s += str[j];
			string t = str;
			int x = t.find(s);
			while (x != std::string::npos)
			{
				count++;
				int size = t.length();
				string r = t;
				t = "";
				for (int i = x + s.length(); i < size; i++)
				{									
					t += r[i];
				}
				x = t.find(s);
			}
			if (count >= max)
			{
				max = count;
				maxstring = s;
			}
		}		
	}
	cout << maxstring;
	return 0;
}
