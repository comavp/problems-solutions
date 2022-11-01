/*
Велосипедные коды
https://acm.timus.ru/problem.aspx?space=1&num=1877
*/

#include<iostream>
using namespace std;

int main()
{
	int first_code;
	int second_code;
	cin >> first_code >> second_code;
	if (first_code % 2 == 0 || second_code % 2 != 0)
		cout << "yes";
	else
		cout << "no";

	return 0;
}