/*
Палиндромы
https://acm.timus.ru/problem.aspx?space=1&num=1297
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
	int len = 0;
	int ind = 0;
	int length;
	for (int i = 0; i < s.length(); i++) {
		int a1 = 1, a2 = 0;
		int l1 = 1, l2 = 0;
		while (i - a1 >= 0 && i + a1 < s.length() && s[i + a1] == s[i - a1]) {
			a1++;
			l1 += 2;
		}
		while (i - a2 - 1 >= 0 && i + a2 < s.length() && s[i + a2] == s[i - a2 - 1]) {
			a2++;
			l2 += 2;
		}
		l1 = max(l1, l2);
		if (l1 > len) {
			len = l1;
			ind = i;
		}
	}
	if (len % 2 == 1) ind -= (len - 1) / 2;
	else ind -= len / 2;
	for (int i = ind; i < ind + len; i++) {
		cout << s[i];
	}
}

int main() {
	init();
	solve();

	return 0;
}