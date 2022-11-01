/*
Девайсы
https://acm.timus.ru/problem.aspx?space=1&num=2033
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

int gcd(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}


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

struct
{
	string str;
	int cost, count;
}arr[6];

int f(string name, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (name == arr[i].str)
			return i;
	}
	return -1;
}

int main()
{
	init();
	int size = 0, max = 0, mincost = INT_MAX, imax;
	string answer;
	for (int i = 0; i < 6; i++)
	{
		string str;
		int cost;
		cin >> str >> str >> cost;
		if (f(str, size) == -1)
		{
			arr[size].str = str;
			arr[size].cost = cost;
			arr[size].count = 1;
			size++;
		}
		else
		{
			arr[f(str, size)].count++;
			if (cost <= arr[f(str, size)].cost)
				arr[f(str, size)].cost = cost;
		}
	}	
	for (int i = 0; i < size; i++)
	{
		if (arr[i].count >= max)
		{						
			if (arr[i].count == max)
			{
				if (arr[i].cost <= mincost)
				{
					mincost = arr[i].cost;
					imax = i;
				}
			}
			else
			{
				imax = i;
				mincost = arr[i].cost;
			}
			max = arr[i].count;			
		}
	}
	cout << arr[imax].str;
	return 0;
}