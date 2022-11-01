/*
Копирование
https://acm.timus.ru/problem.aspx?space=1&num=1131
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
#include<string.h>
#include<queue>
#include<functional>
#include<string>
#include<set>
#include<list>

using namespace std;

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
long long binpow(long long base, long long power, long long m)
{
	if (power == 0) return 1 % m;
	if (power % 2 == 0)
	{
		long long half = binpow(base, power / 2, m);
		return (half % m)  * (half % m) % m;
	}
	else
	{
		long long prev = binpow(base, power - 1, m);
		return (prev % m) * (base % m) % m;
	}
}
int main()
{
	init();
	long long n, k, i = 1;
	int ans = 0;
	cin >> n >> k;
	n--;
	while (n > 0)
	{
		long long x = min(k, i);
		if (x == k)
		{
			ans += n / k;
			if (n % k)
				ans++;
			break;
		}
		ans++;
		n -= x;
		i *= 2;
	}
	cout << ans;
	return 0;
}