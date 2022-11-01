/*
Биография Сандро
https://acm.timus.ru/problem.aspx?space=1&num=1786
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

int reg(char x)
{
	if (x >= 'A' && x <= 'Z')
		return 1;
	if (x >= 'a' && x <= 'z')
		return 0;
}

int main()
{
	string str, name = "Sandro";
	int min = INT_MAX, count = 0;
	cin >> str;
	for (int i = 0; i <= str.size() - name.size(); i++)
	{
		for (int j = 0; j < name.size(); j++)
		{
			if (reg(str[i + j]) != reg(name[j]))
			{
				count += 5;
				if (str[i + j] + 32 != name[j] && str[i + j] - 32 != name[j])
					count += 5;
			}
			else
			{
				if (str[i + j] != name[j])
					count += 5;
			}
		}
		if (min >= count)
			min = count;
		count = 0;
	}
	cout << min;
        return 0;
}