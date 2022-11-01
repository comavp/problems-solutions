/*
Вопросы и ответы
https://acm.timus.ru/problem.aspx?space=1&num=1026
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int  a[100000], p[100];
int compare(const void *x1, const void * x2)
{
	return (*(int*)x1 - *(int*)x2);
}
int main()
{
	int n, k;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	qsort(a, n, sizeof(int), compare);
	cin >> str >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> p[i];
		p[i]--;
	}
	for (int i = 0; i < k; i++)
	{
		cout << a[p[i]] << endl;
	}
	return 0;
}