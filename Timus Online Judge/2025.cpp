/*
Стенка на стенку
https://acm.timus.ru/problem.aspx?space=1&num=2025
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
	int t, n, k, answer[10] = { 0 }, m = 0, arr[10000];
	cin >>t;
	while (t--)
	{
		cin >> n >> k;
		int mk = k;
		for (int i = 0; i < mk; i++)
		{
			arr[i] = n / k;		
			n -= arr[i];
			k--;
		}
		for (int i = 0; i < mk - 1; i++)
		{
			for (int j = i + 1; j < mk; j++)
			{
				answer[m] += arr[i] * arr[j];
			}
		}
		m++;
	}
	for (int i = 0; i < m; i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}