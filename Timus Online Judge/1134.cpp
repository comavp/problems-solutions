/*
Карты
https://acm.timus.ru/problem.aspx?space=1&num=1134
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
	int n, m;
	cin >> n >> m;
	multiset<int> q;
	for (int i = 1; i <= n; i++) {
		q.insert(i);
		q.insert(i - 1);
	}
	vector<int> arr(m);
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr[0]; i++) {
		q.erase(i);
	}
	if (arr[0] - 1 >= 0) {
		q.insert(arr[0] - 1);
	}
	for (int i = 0; i < m; i++) {
		if (arr[i] == 0) {
			if (q.find(arr[i]) == q.end()) {
				cout << "NO";
				return;
			}
			q.erase(q.find(arr[i]));
			q.erase(q.find(arr[i] + 1));
		}
		if (arr[i] == n) {
			if (q.find(arr[i]) == q.end()) {
				cout << "NO";
				return;
			}
			q.erase(q.find(arr[i]));
			q.erase(q.find(arr[i] - 1));
		}
		if (arr[i] != 0 && arr[i] != n) {
			if (q.find(arr[i]) == q.end()) {
				cout << "NO";
				return;
			}
			q.erase(q.find(arr[i]));
			if (q.find(arr[i] - 1) == q.end()) {
				if (q.find(arr[i] + 1) != q.end()) {
					q.erase(q.find(arr[i] + 1));
				}
				else {
					cout << "NO";
					return;
				}
			}
			else {
				q.erase(q.find(arr[i] - 1));
			}
		}
	}
	cout << "YES";
}

int main() {
	init();
	solve();
	return 0;
}