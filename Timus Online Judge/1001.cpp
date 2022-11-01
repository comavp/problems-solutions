/*
Обратный корень
https://acm.timus.ru/problem.aspx?space=1&num=1001
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	vector<long long> p;
	long long x;
	while (scanf("%lld", &x) != EOF) {
		p.push_back(x);
	}
	for (int i = p.size() - 1; i >= 0; i--)
	{
		printf("%.4f\n", sqrt((double)p[i]));
	}
	
	return 0;
}