/*
Double Cola
https://www.codewars.com/kata/551dd1f424b7a4cdae0001f0
*/

#include <string>
#include <vector>

std::string who_is_next(const std::vector<std::string>& names, long long r) {
  long long cnt = 1;
	long long number = names.size();
	while (r > 0) {
		if (r - cnt * number > 0) {
			r -= cnt * number;
		}
		else {
			while (r - cnt * number <= 0) {
				number--;
			}
			r -= cnt * (number + 1);
		}
		cnt *= 2;
	}
	return names[number];
}