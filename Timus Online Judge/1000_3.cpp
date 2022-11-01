/*
A+B Problem
https://acm.timus.ru/problem.aspx?space=1&num=1000
*/

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

using namespace std;

void init()
{
#ifdef ONLINE_JUDGE
#else
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
	
int main()
{
	init();
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}