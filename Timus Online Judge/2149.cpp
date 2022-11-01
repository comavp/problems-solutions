/*
Принцип Дирихле
https://acm.timus.ru/problem.aspx?space=1&num=2149
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
	int n, ans = INF;
	string s;
	cin >> n >> s;
	vector<int> arr;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '<')
			arr.push_back(1);
		if (s[i] == '>')
			arr.push_back(2);
	}
	cin >> s >> s;
	int x = 0, y = 0;
	for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
		if (arr[i] != 1)
			x++;
		if (arr[j] != 2)
			x++;
		if (arr[i] != 2)
			y++;
		if (arr[j] != 1)
			y++;
	}
	ans = min(x, y);
	x = y = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1 && arr[i] != 1)
			x++;
		if (i % 2 == 0 && arr[i] != 2)
			x++;
		if (i % 2 == 1 && arr[i] != 2)
			y++;
		if (i % 2 == 0 && arr[i] != 1)
			y++;
	}
	ans = min(ans, min(x, y));
	cout << ans;
}

int main() {
	init();
	solve();

	return 0;
}