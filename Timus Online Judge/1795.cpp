/*
Мужья в магазине
https://acm.timus.ru/problem.aspx?space=1&num=1795
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
#include<map>

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
	int n, m, ans = 0;
	map<string, int> p;
	queue<pair<string, int>> w;
	bool flag = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int amount;
		string name;
		cin >> amount >> name >> name;
		p.insert(pair<string, int>(name, amount));
	}
	cin >> m;
	
	for (int i = 0; i < m || flag; i++)
	{
		int amount;
		string name;
		if (flag)
		{
			while (!w.empty() && flag)
			{
				name = w.front().first;
				amount = w.front().second;
				w.pop();
				if (w.empty())
					flag = false;
				auto tmp = p.find(name);
				if (tmp->second < amount)
				{
					w.push(pair<string, int>(name, tmp->second));
				}
				else
				{
					tmp->second -= amount;
					if (tmp->second < 1)
						p.erase(tmp);
				}
				ans++;				
			}
		}
		if (!w.empty() && !flag)
		{
			flag = true;
		}
		if (i < m)
		{
			cin >> amount >> name >> name;
			auto tmp = p.find(name);
			if (tmp != p.end())
			{
				if (tmp->second < amount)
				{
					w.push(pair<string, int>(name, tmp->second));
				}
				else
				{
					tmp->second -= amount;
					if (tmp->second < 1)
						p.erase(tmp);
				}
			}

			ans++;
		}
	}
	cout << ans;
	return 0;
}

