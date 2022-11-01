/*
Генеалогическое дерево
https://acm.timus.ru/problem.aspx?space=1&num=1022
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
#include<string>
#include<queue>
#include<functional>
#include<set>
#include<list>
#include<stack>
#include<map>
#include<iomanip>

using namespace std;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

const string FILENAME = "";
const bool FILE_IO = 1;
const int INF = 1000000000;

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

void dfs(int v, vector<bool>& used, vector<vector<int>>& g, vector<int>& res) {
	used[v] = true;
	for (int i = 0; i < g[v].size(); i++) {
		int to = g[v][i];
		if (!used[to]) {
			dfs(to, used, g, res);
		}
	}
	res.push_back(v);
}

void top_sort(int n, vector<vector<int>>& g, vector<int>& res) {
	vector<bool> used(n, false);
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			dfs(i, used, g, res);
		}
	}
	reverse(res.begin(), res.end());
}

void solve() {
	int n;
	cin >> n;
	vector<int> res;
	vector<vector<int>> g(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		while (x > 0) {
			g[i].push_back(x - 1);
			cin >> x;
		}
	}
	
	top_sort(n, g, res);

	for (int i = 0; i < n; i++) {
		cout << res[i] + 1 << " ";
	}
}

int main() {
	init();
	solve();
	return 0;
}