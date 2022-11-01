/*
Ползуны
https://acm.timus.ru/problem.aspx?space=1&num=1617
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

pair<int, int> arr[150];

int f(int size, int x)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].first == x)
			return i;
	}
	return -1;
}

int main()
{
	int n, size = 0, answer = 0;	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, c;
		cin >> x;
		c = f(size, x);
		if (c == -1)
		{
			arr[size].first = x;
			arr[size].second = 1;
			size++;
		}
		else
		{
			arr[c].second++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		answer += arr[i].second / 4;
	}
	cout << answer;
	return 0;
}
