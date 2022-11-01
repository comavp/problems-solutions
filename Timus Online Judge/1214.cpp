/*
Странная процедура
https://acm.timus.ru/problem.aspx?space=1&num=1214
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
typedef long long ll;
const string FILENAME = "";
const bool FILE_IO = 1;

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

void solve(long long x, long long y) {
	if (x > 0 && y > 0) {
		if ((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0))  {
			cout << y << " " << x;
		}
		else {
			cout << x << " " << y;
		}
	}
	else {
		cout << x << " " << y;
	}
}

int main()
{
	init();
	long long x, y;
	cin >> x >> y;
	solve(x, y);
	return 0;
}
