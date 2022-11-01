/*
Шифровальная решётка
https://acm.timus.ru/problem.aspx?space=1&num=1712
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

pair<int, int> p[4];
char P[4][4];
string answer;

void reverse()
{
	for (int i = 0; i < 4; i++)
	{
		int c = p[i].first;
		p[i].first = p[i].second;
		p[i].second = 3 - c;
	}
	return;
}

void sort()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - i; j++)
		{
			if (p[j].first >= p[j + 1].first)
			{
				if (p[j].first == p[j + 1].first)
				{
					if (p[j].second > p[j + 1].second)
					{
						pair<int, int> c = p[j];
						p[j] = p[j + 1];
						p[j + 1] = c;
					}
				}
				else
				{
					pair<int, int> d = p[j];
					p[j] = p[j + 1];
					p[j + 1] = d;
				}
			}
		}
	}
	return;
}

void kat()
{
	answer += P[p[0].first][p[0].second];
	answer += P[p[1].first][p[1].second];
	answer += P[p[2].first][p[2].second];
	answer += P[p[3].first][p[3].second];
	return;
}

int main()
{	
	int k = 0;	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char c;
			cin >> c;
			if (c == 'X')
			{
				p[k].first = i;
				p[k].second = j;
				k++;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> P[i][j];
		}
	}	
	for (int j = 0; j < 4; j++)
	{
		kat();
		reverse();
		sort();
	}	
	cout << answer;
	return 0;
}