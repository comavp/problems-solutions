/*
Массив
https://acm.timus.ru/problem.aspx?space=1&num=1228
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
#include<string>
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

int main() {
	init();
	int n;
	long long s;
	cin >> n >> s;
	vector<long long> d(n);
	vector<long long> k(n);
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	for (int i = 0; i < n - 1; i++) {
		k[i + 1] = d[i] / d[i + 1];
	}
	k[0] = s;
	for (int i = 1; i < n; i++) {
		k[0] /= k[i];
	}
	for (int i = 0; i < n; i++) {
		cout << k[i] - 1 << " ";
	}
	return 0;
}