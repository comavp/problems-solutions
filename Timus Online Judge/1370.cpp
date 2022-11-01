/*
Волшебник
https://acm.timus.ru/problem.aspx?space=1&num=1370
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int main()
{
	int n, m, arr[1000], count = 1, j;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	j = m % n;
	while (count <= 10)
	{
		cout << arr[j];
		count++;
		j++;
		if (j == n)
			j = 0;
	}
	return 0;
}