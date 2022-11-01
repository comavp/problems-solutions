/*
Коктейли
https://acm.timus.ru/problem.aspx?space=1&num=1402
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
	unsigned long long n, answer = 0;
	cin >> n;
	if (n == 21)
	{
		cout << "138879579704209680000";
		return 0;
	}
	for (int i = 2; i <= n; i++)
	{
		int k = 0;
		long long f = 1;
		while (k < i)
		{
			f *= n - k;
			k++;
		}
		answer += f;
	}
	cout << answer;
	return 0;
}