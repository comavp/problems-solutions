/*
Find the odd int
https://www.codewars.com/kata/54da5a58ea159efa38000836
*/

#include <vector>

int findOdd(const std::vector<int>& numbers){
  int ans = numbers[0];
  for(int i = 1; i < numbers.size(); i++) {
      ans ^= numbers[i];
  }
  return ans;
}