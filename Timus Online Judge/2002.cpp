/*
Тестовое задание
https://acm.timus.ru/problem.aspx?space=1&num=2002
*/

#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<cstdlib>
using namespace std;

struct users
{
	string login, password;
	bool x;
};

struct 
{
	string str;

}list[100];

int find(users *base, int size, string login)
{
	for (int i = 0; i < size; i++)
	{
		if (login == base[i].login)
			return i;
	}
	return -1;
}

int main()
{
	users base[100];
	int n, size = 0, k, m = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "register")
		{
			cin >> str;
			if (find(base, size, str) == -1)
			{
				base[size].login = str;
				cin >> base[size].password;
				base[size].x = false;
				size++;				
				list[m].str = "success: new user added";
				m++;
			}
			else
			{
				cin >> str; 				
				list[m].str = "fail: user already exists";
				m++;
			}
		}
		if (str == "login")
		{
			cin >> str;
			k = find(base, size, str);
			if (k == -1)
			{
				cin >> str;				
				list[m].str = "fail: no such user";
				m++;
			}
			else
			{
				cin >> str;
				if (base[k].password == str)
				{
					if (!base[k].x)
					{
						base[k].x = true;						
						list[m].str = "success: user logged in";
						m++;
					}
					else
					{						
						list[m].str = "fail: already logged in";
						m++;
					}
				}
				else
				{
					list[m].str =  "fail: incorrect password";
					m++;
				}
			}
		}
		if (str == "logout")
		{
			cin >> str;
			k = find(base, size, str);
			if (k == -1)
			{
				list[m].str =  "fail: no such user";
				m++;
			}
			else
			{
				if (base[k].x)
				{
					base[k].x = false;
					list[m].str = "success: user logged out";
					m++;
				}
				else
				{
					list[m].str = "fail: already logged out";
					m++;
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		cout << list[i].str << endl;
	}
	return 0;
}