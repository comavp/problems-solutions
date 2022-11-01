/*
Хороший, плохой, злой
https://acm.timus.ru/problem.aspx?space=1&num=2138
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

ll bin_pow(ll a, ll n) {
	if (n == 0) {
		return 1;
	}
	if (n % 2 == 1) {
		return bin_pow(a, n - 1) * a;
	} {
		ll b = bin_pow(a, n / 2);
		return b * b;
	}
}

void solve() {
	string s;
	ll n, ans = 0;
	cin >> s >> n;
	vector<ll> arr;
	while (n > 0) {		
		arr.push_back(n % 256);
		n /= 256;
	}
	for (int i = 0; arr.size() < 4; i++) {
		arr.push_back(0);
	}
	for (int i = arr.size() - 1; i >= 0; i--) {
		ans += arr[arr.size() - i - 1] * bin_pow(256, i);
	}
	cout << ans;
}

int main() {
	init();
	solve();

	return 0;
}