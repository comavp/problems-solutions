/*
Число Исенбаева
https://acm.timus.ru/problem.aspx?space=1&num=1837
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

int  a[300][300];

void bfs(vector<pair<string, int>>& str, int s, int n)
{
	queue<int> q;
	q.push(s);
	vector<bool> used(n);
	vector<int> d(n);
	used[s] = true;
	while (!q.empty())
	{
		int v = q.front();
		q.pop();
		for (int i = 0; i < n; i++)
		{
			if (a[v][i])
			{
				int to = i;
				if (!used[i])
				{
					used[to] = true;
					q.push(to);
					d[to] = d[v] + 1;
				}
			}
		}
	}
	for (int i = 0; i < str.size(); i++)
	{
		if (used[i])
		{
			str[i].second = d[i];
		}
	}
}

int find_name(const vector<pair<string, int>>& p, const string name)
{
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].first == name)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	init();
	int n, isem = -1;
	cin >> n;
	vector<pair<string, int>> str(0);
	for (int i = 0; i < n; i++)
	{
		string str1, str2, str3;
		pair<string, int> x;
		int ind1, ind2, ind3;
		cin >> str1 >> str2 >> str3;
		ind1 = find_name(str, str1);
		if (ind1 == -1)
		{
			x.first = str1;
			x.second = -1;
			str.push_back(x);
			ind1 = str.size() - 1;
			if (str1 == "Isenbaev")
				isem = ind1;
		}
		ind2 = find_name(str, str2);
		if (ind2 == -1)
		{
			x.first = str2;
			x.second = -1;
			str.push_back(x);
			ind2 = str.size() - 1;
			if (str2 == "Isenbaev")
				isem = ind2;
		}
		ind3 = find_name(str, str3);
		if (ind3 == -1)
		{
			x.first = str3;
			x.second = -1;
			str.push_back(x);
			ind3 = str.size() - 1;
			if (str3 == "Isenbaev")
				isem = ind3;
		}
		a[ind1][ind2] = 1; a[ind1][ind3] = 1;
		a[ind2][ind1] = 1; a[ind2][ind3] = 1;
		a[ind3][ind1] = 1; a[ind3][ind2] = 1;	
	}
	if (isem != -1)
		bfs(str, isem, 300);
	sort(str.begin(), str.end());
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i].first << " ";
		if (str[i].second == -1)
		{
			cout << "undefined" << endl;
		}
		else
		{
			cout << str[i].second << endl;
		}
	}
	return 0;
}
