/*
Взлом RSA
https://acm.timus.ru/problem.aspx?space=1&num=1141
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

int binPow(int a, int n, int mod) {
	if (n == 0) return 1;
	if (n % 2) {
		return binPow(a, n - 1, mod) * a % mod;
	}
	else {
		int b = binPow(a, n / 2, mod);
		return b * b % mod;
	}
}

void solve() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int e, n, c, ans = 0;
		cin >> e >> n >> c;
		c %= n;
		e %= n;
		ans = c;
		int tmp = binPow(c, e, n);
		while (tmp != c) {
			ans = tmp;
			tmp = binPow(ans, e, n);
		}
		cout << ans << endl;
	}
}

int main() {
	init();
	solve();

	return 0;
}