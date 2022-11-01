/*
Не спрашивай даму о возрасте
https://acm.timus.ru/problem.aspx?space=1&num=1104
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
	string s;
	cin >> s;
	int sum = 0, mk = 2;
	for (int i = 0; i < s.length(); i++) {
		int x;
		if (s[i] >= 'A' && s[i] <= 'Z')
			x = s[i] - 'A' + 10;
		else
			x = s[i] - '0';
		sum += x;
		mk = max(mk, x + 1);
	}
	for (int k = mk; k <= 36; k++) {
		if (sum % (k - 1) == 0) {
			cout << k;
			return;
		}
	}
	cout << "No solution.";
}

int main() {
	init();
	solve();

	return 0;
}