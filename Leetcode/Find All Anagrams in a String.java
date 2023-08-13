/*
Find All Anagrams in a String
https://www.leetcode.com/problems/find-all-anagrams-in-a-string
*/

class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        final List<Integer> result = new ArrayList<>();
        if (s.length() < p.length()) {
            return result;
        }
        int anagramPower = 0;
        final int[] numberOfLetters = new int[26];

        for (int i = 0; i < p.length(); i++) {
            int index = p.charAt(i) - (int)'a';
            numberOfLetters[index]++;
        }
        for (int i = 0; i < numberOfLetters.length; i++) {
            if (numberOfLetters[i] != 0) {
                anagramPower++;
            }
        }

        int ptr = 0;
        for (; ptr < p.length(); ptr++) {
            int index = s.charAt(ptr) - (int)'a';
            int numberBefore = numberOfLetters[index];
            numberOfLetters[index]--;
            if (numberOfLetters[index] == 0) {
                anagramPower--;
            } else if (numberBefore == 0) {
                anagramPower++;
            }
        }

        if (anagramPower == 0) {
            result.add(0);
        }

        for (int i = 0; ptr < s.length(); i++, ptr++) {
            int firstIndex = s.charAt(i) - (int) 'a';
            int numberBefore = numberOfLetters[firstIndex];
            numberOfLetters[firstIndex]++;
            if (numberOfLetters[firstIndex] == 0) {
                anagramPower--;
            } else if (numberBefore == 0) {
                anagramPower++;
            }

            int secondIndex = s.charAt(ptr) - (int) 'a';
            numberBefore = numberOfLetters[secondIndex];
            numberOfLetters[secondIndex]--;
            if (numberOfLetters[secondIndex] == 0) {
                anagramPower--;
            } else if (numberBefore == 0) {
                anagramPower++;
            }

            if (anagramPower == 0) {
                result.add(i + 1);
            }
        }

        return result;
    }
}