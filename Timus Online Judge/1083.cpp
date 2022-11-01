/*
Факториалы!!!
https://acm.timus.ru/problem.aspx?space=1&num=1083
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main()
{
	int n, k = 0, answer = 1;
	string str;
	cin >> n >> str;
	while (str[k] == '!')
	{
		k++;
	}
	if (n > k)
	{
		while (n > 0)
		{
			answer *= n;
			n -= k;
		}
	}
	else
	{
		answer = n;
	}
	cout << answer;
	return 0;
}
