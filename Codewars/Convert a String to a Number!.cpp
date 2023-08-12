/*
Convert a String to a Number!
https://www.codewars.com/kata/544675c6f971f7399a000e79
*/

using namespace std;

long long string_to_number(const std::string& str) {
       bool flag = false;
       long long ans = 0;
       for (int i = 0; i < str.length(); i++) {
           if (str[i] == '-') {
               flag = true;
           } else {
               ans += str[i] - '0';
               ans *= 10;
           }
       }
       ans /= 10;
       if (flag) ans *= -1;
       return ans;
}