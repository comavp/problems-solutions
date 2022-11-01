/*
Метро
https://acm.timus.ru/problem.aspx?space=1&num=1119
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
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;

const string FILENAME = "";
const bool FILE_IO = 1;
const int INF = 1000000000;
const int MOD = 1000000000;

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
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	cout.precision(12);
}

void solve() {
	int n, m;
	cin >> n >> m;
	int k = 0;
	cin >> k;
	vector<vector<bool>> isGood(m + 1, vector<bool>(n + 1, false));
	vector<vector<double>> ans(m + 1, vector<double>(n + 1));
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		isGood[y][x] = true;
	}
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			double first = INF, second = INF, third = INF;
			if (i != 0) {
				first = ans[i - 1][j] + 100;
			}
			if (j != 0) {
				second = ans[i][j - 1] + 100;
			}
			if (i != 0 && j != 0 && isGood[i][j]){
				third = ans[i - 1][j - 1] + sqrt(2) * 100;
			}
			if (i != 0 || j != 0)
				ans[i][j] = min(first, min(second, third));
		}
	}
	cout << round(ans[m][n]);
}

int main() {
	init();
	solve();

	return 0;
}