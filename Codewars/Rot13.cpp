/*
Rot13
https://www.codewars.com/kata/530e15517bc88ac656000716
*/

#include <string>
using namespace std;

string rot13(string msg)
{
  for (int i = 0; i < msg.length(); i++) {
		if (msg[i] >= 'a' && msg[i] <= 'z') {
			msg[i] += 13;
			if (msg[i] > 'z') msg[i] -= 26;
			if (msg[i] < 0) msg[i] += 255 + 'a' - 'z';
		}
		if (msg[i] >= 'A' && msg[i] <= 'Z') {
			msg[i] += 13; 
			if (msg[i] > 'Z') msg[i] -= 26;
			if (msg[i] < 0) msg[i] += 255 + 'A' - 'Z';
		}
	}
	return msg;
}