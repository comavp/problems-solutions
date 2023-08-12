/*
Tribonacci Sequence
https://www.codewars.com/kata/556deca17c58da83c00002db
*/

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    for (int i = 0; i < n; i++) {
        if (i < 3) {
            result.push_back(signature[i]);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}