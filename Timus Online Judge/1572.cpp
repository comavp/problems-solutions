/*
Екатеринозаводский колодец
https://acm.timus.ru/problem.aspx?space=1&num=1572
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

void solve() {
	double t, a, n;
	int ans = 0;
	cin >> t >> a >> n;
	if (t == 1) {
		a *= 2;
	}
	if (t == 2) {
		a = a * sqrt(2.0);
	}
	for (int i = 0; i < n; i++) {
		double x;
		cin >> t >> x;
		if (t == 1) {
			x *= 2;
		}
		if (t == 3) {
			x = x * sqrt(3.0) / 2;
		}
		if (x <= a) {
			ans++;
		}
	}
	cout << ans;
}

int main() {
	init();
	solve();
	return 0;
}