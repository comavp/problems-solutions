/*
Трамвайный форум
https://acm.timus.ru/problem.aspx?space=1&num=1612
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
	string s1 = "tram", s2 = "trolleybus", str = "";
	int c1 = 0, c2 = 0;
	while (1)
	{
		char c = '1';
		str = "";
		while (1)
		{	
			c = getchar();
			if (c != '.' && c != ',' && c != ':' && c != '-' && c != ' ' && c != '!' && c != '?' && c != '\n' && c != EOF)
				str += c;
			else
				break;
		} 
		if (c == EOF)
			break;
		if (str == s1)
			c1++;
		if (str == s2)
			c2++;
	}
	
	if (c1 > c2)
		cout << "Tram driver";
	if (c1 < c2)
		cout << "Trolleybus driver";
	if (c1 == c2)
		cout << "Bus driver";
	return 0;
}
