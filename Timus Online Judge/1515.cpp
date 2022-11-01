/*
Финансовая реформа
https://acm.timus.ru/problem.aspx?space=1&num=1515
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
	int answer = 0, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > answer +  1)
		{
			cout << answer + 1;
			return 0;
		}
		else
		{
			answer += x;
		}
	}
	cout << answer + 1;
	return 0;
}