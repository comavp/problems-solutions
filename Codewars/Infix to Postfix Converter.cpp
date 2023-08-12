/*
Infix to Postfix Converter
https://www.codewars.com/kata/52e864d1ffb6ac25db00017f
*/

#include <string>
#include <deque>
#include <map>

std::string to_postfix(std::string infix) {
	std::deque<char> q;
	std::map<char, int> op;
	std::string postfix;
	std::string digits = "0123456789";
	op.insert({ '+', 0 });
	op.insert({ '-', 0 });
	op.insert({ '*', 1 });
	op.insert({ '/', 1 });
	op.insert({ '^', 2 });
	for (int i = 0; i < infix.length(); i++) {
		if (digits.find(infix[i]) != std::string::npos) {
			postfix += infix[i];
		}
		else {
			if (infix[i] == '(') {
				q.push_front(infix[i]);
			}
			else if (op.find(infix[i]) != op.end()) {
				while (q.size() != 0 && op.find(q.front()) != op.end() && op[q.front()] >= op[infix[i]]) {
					if (q.front() == '^' && q.front() == infix[i]) {
						break;
					}
					postfix += q.front();
					q.pop_front();
				}
				q.push_front(infix[i]);
			}
			else {
				if (infix[i] == ')') {
					while (q.size() != 0 && q.front() != '(') {
						postfix += q.front();
						q.pop_front();
					}
					q.pop_front();
				}
			}
		}
	}
	while (q.size() != 0) {
		postfix += q.front();
		q.pop_front();
	}
	return postfix;
}