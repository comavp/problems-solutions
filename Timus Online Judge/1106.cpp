/*
Две команды
https://acm.timus.ru/problem.aspx?space=1&num=1106
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

vector<int> ans;
void bfs(vector<vector<int>>& p, vector<bool>& used, int s)
{
	int n = p.size();
	queue<int> q;
	q.push(s);
	used[s] = true;
	vector<int> team(p.size(), 0);
	while (!q.empty())
	{
		int v = q.front();		
		q.pop();
		for (int i = 0; i < p[v].size(); i++)
		{
			int to = p[v][i];
			if (!used[to])
			{
				used[to] = true;
				q.push(to);
				if (!team[v])
				{
					team[to] = 1;
					ans.push_back(to);
				}
			}
		}
	}	
	return;
}

int main()
{
	init();
	int n;
	cin >> n;
	vector<bool> used(n + 1, false);
	vector<vector<int>> p(n + 1);
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		while (x)
		{
			p[i].push_back(x);
			cin >> x;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			bfs(p, used, i);
		}
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}
