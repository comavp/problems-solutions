/*
Human readable duration format
https://www.codewars.com/kata/52742f58faf5485cae000b9a
*/

#include <string>

std::string format_duration(int seconds) {
	std::string result = "";
	std::vector<std::string> names({ "year", "day", "hour", "minute", "second" });
	std::vector<std::string> pluralNames({ "years", "days", "hours", "minutes", "seconds" });
	std::vector<int> numberOfSeconds({ 365, 24, 60, 60, 1 });
	for (int i = numberOfSeconds.size() - 2; i >= 0; i--) {
		numberOfSeconds[i] *= numberOfSeconds[i + 1];
	}

	if (seconds == 0) {
		result = "now";
	}
	else {
		std::vector<std::string> resultNames;
		std::vector<int> resultNums;
		for (int i = 0; i < names.size(); i++) {
			int secondsNum = numberOfSeconds[i];
			int curNum = seconds / secondsNum;
			seconds -= curNum * secondsNum;
			if (curNum > 1) {
				resultNames.push_back(pluralNames[i]);
				resultNums.push_back(curNum);
			}
			else if (curNum == 1) {
				resultNames.push_back(names[i]);
				resultNums.push_back(curNum);
			}
		}
		for (int i = 0; i < resultNames.size(); i++) {
			result += std::to_string(resultNums[i]) + " " + resultNames[i];
			if (resultNames.size() >  1 && i < resultNames.size() - 2) {
				result += ", ";
			}
			else if (resultNames.size() > 1 && i == resultNames.size() - 2) {
				result += " and ";
			}
		}
	}
	return result;
}