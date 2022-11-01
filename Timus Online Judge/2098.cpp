/*
Тем ниже Приоры
https://acm.timus.ru/problem.aspx?space=1&num=2098
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
	double b, c, d, k, p;
	cin >> b >> c >> d >> k >> p;
	double s0 = (2 * c + (k + 1) * d) * 0.5 * k;
	double s1 = s0 + b;
	double s2 = s0 * (1 + p / 100);
	if (s2 - s1 > 0.000001) {
		cout << "Cash" << endl;
	}
	else {
		cout << "Insurance" << endl;
	}
	cout << abs(s2 - s1) << endl;
}

int main() {
	init();
	solve();

	return 0;
}