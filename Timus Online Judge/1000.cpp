/*
A+B Problem
https://acm.timus.ru/problem.aspx?space=1&num=1000
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
#include<string.h>
#include<queue>
#include<functional>
#include<string>
#include<set>
#include<list>

using namespace std;

//const string FILENAME = "";
//const bool FILE_IO = 1;
//
//void init()
//{
//#ifdef ONLINE_JUDGE
//	if (!FILENAME.empty())
//	{
//		freopen((FILENAME + ".txt").c_str(), "r", stdin);
//		freopen((FILENAME + ".txt").c_str(), "w", stdout);
//	}
//#else
//	if (FILE_IO)
//	{
//		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
//	}
//#endif
//}
void init()
{
	#ifdef ONLINE_JUDGE
	#else
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main()
{
	init();
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}