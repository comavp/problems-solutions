/*
Fake Binary
https://www.codewars.com/kata/57eae65a4321032ce000002d
*/

#include <string>

std::string fakeBin(std::string str){
    std::string res = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '5') {
            res += '0';
        } else {
            res += '1';
        }
    }
    return res;
}