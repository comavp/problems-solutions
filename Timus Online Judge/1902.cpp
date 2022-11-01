/*
Нео-Венеция
https://acm.timus.ru/problem.aspx?space=1&num=1902
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
	double n, t, s, S[100];
	cin >> n >> t >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> S[i];
		S[i] = (s + S[i] + t) / 2.0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%0.6f\n", S[i]);
	}
	return 0;
}