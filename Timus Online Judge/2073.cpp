/*
Логи соревнований
https://acm.timus.ru/problem.aspx?space=1&num=2073
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
#include<set>
#include<list>
#include<stack>
#include<map>
#include<iomanip>

using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;

const string FILENAME = "";
const bool FILE_IO = 1;
const int INF = 1000000000;
const int MOD = 1000000000;

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
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	cout.precision(12);
}

void print_header() {
	cout << "+------------------------------+--------+-------------+" << endl;
	cout << "|Contest name                  |Date    |ABCDEFGHIJKLM|" << endl;
	cout << "+------------------------------+--------+-------------+" << endl;
}

void print_table(string& contest_name, string& date, vector<char>& problems) {
	cout << "|" + contest_name;
	for (int i = 0; i < 30 - contest_name.length(); i++) {
		cout << " ";
	}
	cout << "|" + date + "|";
	for (int i = 0; i < problems.size(); i++) {
		cout << problems[i];
	}
	for (int i = 0; i < 13 - problems.size(); i++) {
		 cout << " ";
	}
	cout << "|" << endl;
	cout << "+------------------------------+--------+-------------+" << endl;
}

void solve() {
	int n;
	cin >> n;
	string str;
	getline(cin, str);
	vector<char> problems;
	print_header();
	for (int i = 0; i < n; i++) {
		string contest_name, date;
		getline(cin, contest_name, '\n');
		cin >> date;
		int p, s;
		cin >> p >> s;
		problems.resize(p, '.');
		getline(cin, str);
		for (int j = 0; j < s; j++) {
			string pr, ver;
			getline(cin, pr, ' ');
			getline(cin, ver, '\n');
			if (ver == "Accepted") {
				problems[pr[0] - 'A'] = 'o';
			}
			else {
				if (problems[pr[0] - 'A'] != 'o')
					problems[pr[0] - 'A'] = 'x';
			}
		}
		print_table(contest_name, date, problems);
		problems.clear();
	}	
}

int main() {
	init();
	solve();

	return 0;
}