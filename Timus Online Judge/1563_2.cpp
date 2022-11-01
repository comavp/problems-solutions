/*
Баяны
https://acm.timus.ru/problem.aspx?space=1&num=1563
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

struct shop
{
	string name;
}arr[1000];

int f(string name, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].name == name)
			return i;
	}
	return -1;
}

int main()
{
	init();
	int n, answer = 0, size = 0;
	string name = "";
	/*cin >> n;*/
	cin >> n;
	getline(cin, name, '\n');
	for (int i = 0; i < n; i++)
	{
		/*do
		{
			getline(cin, name, '\n');
		} while (name == "");*/
		getline(cin, name, '\n');
		if (f(name, size) == -1)
		{
			arr[size].name = name;
			size++;
		}
		else
		{
			answer++;
		}
	}
	cout << answer;
	return 0;
}
