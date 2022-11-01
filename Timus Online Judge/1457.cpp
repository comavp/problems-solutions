/*
Теплотрасса
https://acm.timus.ru/problem.aspx?space=1&num=1457
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
	int n, arr[1000];
	double answer = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		answer += arr[i];
	}
	printf("%0.6f", answer / (double)n);
	return 0;
}