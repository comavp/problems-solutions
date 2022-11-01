/*
Чизбургер этот не нужен тебе
https://acm.timus.ru/problem.aspx?space=1&num=1993
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
#include<string>
#include<queue>
#include<functional>
#include<string>
#include<set>
#include<list>
#include<stack>
#include<map>
#include<iomanip>

using namespace std;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

const string FILENAME = "";
const bool FILE_IO = 1;
const int INF = 1000000000;

void init()
{
#ifdef ONLINE_JUDGE
	if (!FILENAME.empty())
	{
		freopen((FILENAME + ".in").c_str(), "r", stdin);
		freopen((FILENAME + ".out").c_str(), "w", stdout);
	}
#else
	if (FILE_IO)
	{
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}
#endif
}


int main() {
	init();
	char c = 'a';
	const string s = "(){}[]";
	vector<string> arr(7);
	int cnt = 0;
	bool flag = false;
	while (c != '\n') {
		c = getchar();
		string tmp = "";
		if (c == ',') {
			flag = true;
			while (s.find(c) == -1) {
				tmp.push_back(c);
				c = getchar();
			}
			arr[3] = tmp;
			tmp = "";
		}		
		if (s.find(c) != -1) {
			c = getchar();
			while (s.find(c) == -1) {
				tmp.push_back(c);
				c = getchar();
			}
			if (c == '}' && !flag) {
				arr[0] = tmp;
				arr[0][0] = toupper(arr[0][0]);
				
			}
			if (c == ')' && !flag) {
				arr[1] = tmp;
				arr[1][0] = tolower(arr[1][0]);
			}
			if (c == ']' && !flag) {
				arr[2] = tmp;
				arr[2][0] = tolower(arr[2][0]);
			}
			if (c == '}' && flag) {
				arr[4] = tmp;
			}
			if (c == ')' && flag) {
				arr[5] = tmp;
			}
			if (c == ']' && flag) {
				arr[6] = tmp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << " " << arr[i];
	}
	if (flag) {
		for (int i = 3; i < 7; i++) {
			cout << arr[i] << " ";
		}
	}
	return 0;
}

