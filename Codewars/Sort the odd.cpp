/*
Sort the odd
https://www.codewars.com/kata/578aa45ee9fd15ff4600090d
*/

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> a, b;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] % 2) {
                a.push_back(array[i]);
                b.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < b.size(); i++) {
            array[b[i]] = a[i];
        }
        return array;
    }
};