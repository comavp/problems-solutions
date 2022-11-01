/*
Волшебная шляпа
https://acm.timus.ru/problem.aspx?space=1&num=1446
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
	int N, g = 0, s = 0, h = 0, r = 0;
	string G[1000], S[1000], H[1000], R[1000], str;
	cin >> N;
	getline(cin, str, '\n');
	for (int i = 0; i < N; i++)
	{
		string c;
		getline(cin, str, '\n');
		cin >> c;
		if (c[0] == 'G')
		{
			G[g] = str;
			g++;
		}
		if (c[0] == 'S')
		{
			S[s] = str;
			s++;
		}
		if (c[0] == 'H')
		{
			H[h] = str;
			h++;
		}
		if (c[0] == 'R')
		{
			R[r] = str;
			r++;
		}
		getline(cin, str, '\n');
	}
	cout << "Slytherin:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << S[i] << endl;
	}
	cout << endl;
	cout << "Hufflepuff:" << endl;
	for (int i = 0; i < h; i++)
	{
		cout << H[i] << endl;
	}
	cout << endl;
	cout << "Gryffindor:" << endl;
	for (int i = 0; i < g; i++)
	{
		cout << G[i] << endl;
	}
	cout << endl;
	cout << "Ravenclaw:" << endl;
	for (int i = 0; i < r; i++)
	{
		cout << R[i] << endl;
	}
	cout << endl;
	return 0;
}