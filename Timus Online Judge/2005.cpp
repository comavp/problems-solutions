/*
Такси для программистов
https://acm.timus.ru/problem.aspx?space=1&num=2005
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
	int arr[5][5], min[4], m = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	min[0] = arr[0][2] + arr[2][1] + arr[1][3] + arr[3][4];
	min[1] = arr[0][2] + arr[2][3] + arr[3][1] + arr[1][4];
	min[2] = arr[0][3] + arr[3][2] + arr[2][1] + arr[1][4];
	min[3] = arr[0][1] + arr[1][2] + arr[2][3] + arr[3][4];
	for (int i = 0; i < 4; i++)
	{
		if (min[i] <= min[m])
		{
			m = i;
		}
	}
	if (m == 0)
	{
		cout << min[m] << endl << "1 3 2 4 5";
	}
	if (m == 1)
	{
		cout << min[m] << endl << "1 3 4 2 5";
	}
	if (m == 2)
	{
		cout << min[m] << endl << "1 4 3 2 5";
	}
	if (m == 3)
	{
		cout << min[m] << endl << "1 2 3 4 5";
	}
	return 0;
}