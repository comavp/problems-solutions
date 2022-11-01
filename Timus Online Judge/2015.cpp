/*
Женя переезжает из общежития
https://acm.timus.ru/problem.aspx?space=1&num=2015
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

struct friends
{
	int money, adv;
};

int main()
{
	int fr = 0, flat = 0, money, adv1, adv2, n, m, max = 0;
	friends arr[256];
	cin >> money >> adv1 >> adv2 >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].money >> arr[i].adv;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int type, cost, fadv;
		cin >> type >> cost >> fadv;
		if (money >= cost)
		{
			if (max <= fadv + adv1 && type == 1)
			{
				max = fadv + adv1;
				flat = i + 1;
			}
			if (max <= fadv + adv2 && type == 2)
			{
				max = fadv + adv2;
				flat = i + 1;
			}
		}
		for (int j = 0; j < n; j++)
		{
			if (money >= (double)cost / 2.0 && arr[j].money >= (double)cost / 2.0 && type == 2)
			{
				if (max <= fadv + arr[j].adv)
				{
					max = fadv + arr[j].adv;
					flat = i + 1;
					fr = j + 1;
				}
			}
		}
	}
	if (flat)
	{
		if (fr)
		{
			cout << "You should rent the apartment #" << flat << " with the friend #" << fr << ".";
		}
		else
		{
			cout << "You should rent the apartment #" << flat << " alone.";
		}
	}
	else
	{
		cout << "Forget about apartments. Live in the dormitory.";
	}
	return 0;
}