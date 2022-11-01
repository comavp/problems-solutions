/*
Порядок
https://acm.timus.ru/problem.aspx?space=1&num=1510
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

using namespace std;

const string FILENAME = "";
const bool FILE_IO = 1;

int gcd(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}


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


int main()
{
	init();
	int n, count = 0, max = 0, imax, i;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	int x = arr[0];
	for (i = 0; i < n; i++)
	{		
		if (arr[i] == x)
		{
			count++;
		}
		else
		{
			if (count > max)
			{
				max = count;
				imax = arr[i - 1];
			}				
			count = 1;
			x = arr[i];
		}
	}
	if (count > max)
		imax = arr[i - 1];
	cout << imax;
	return 0;
}