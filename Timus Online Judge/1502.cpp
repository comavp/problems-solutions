/*
Точки домино
https://acm.timus.ru/problem.aspx?space=1&num=1502
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main()
{
	int n;
	long long answer = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			answer += i + j;
		}
	}
	cout << answer;
	return 0;
}