/*
Оборотень
https://acm.timus.ru/problem.aspx?space=1&num=1242
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

void bfs(vector<vector<int>>& p, vector<vector<int>>& c, vector<bool>& ver, int s)
{
	vector<bool> used(p.size(), false);
	queue<int> q;
	q.push(s);
	used[s] = true;
	ver[s] = false;
	while (!q.empty())
	{
		int v = q.front();
		q.pop();
		for (int i = 0; i < p[v].size(); i++)
		{
			int to = p[v][i];
			if (!used[to])
			{
				q.push(to);
				used[to] = true;
				ver[to] = false;
			}
		}
	}
	q.push(s);
	for (int i = 1; i < used.size(); i++)
		used[i] = false;
	used[s] = true;
	while (!q.empty())
	{
		int v = q.front();
		q.pop();
		for (int i = 0; i < c[v].size(); i++)
		{
			int to = c[v][i];
			if (!used[to])
			{
				q.push(to);
				used[to] = true;
				ver[to] = false;
			}
		}
	}
	return;
}
int main()
{
	init();
	int n, x, y;
	string s;
	int count = 0;
	cin >> n;
	vector<vector<int>> p(n + 1), c(n + 1);
	vector<bool> ver(n + 1, true);
	while (scanf("%d %d", &x, &y) == 2)
	{
		c[y].push_back(x);
		p[x].push_back(y);
	}
	cin >> s;
	while (scanf("%d", &n) != EOF)
	{
		bfs(p, c, ver, n);
	}
	
	for (int i = 1; i < ver.size(); i++)
	{
		if (ver[i])
		{
			count++;
			cout << i << " ";
		}
	}
	if (!count)
		cout << count;
	return 0;
}
