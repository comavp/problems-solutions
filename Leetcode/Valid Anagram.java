/*
Valid Anagram
https://www.leetcode.com/problems/valid-anagram
*/

class Solution {
    public boolean isAnagram(String s, String t) {
       return stringToMap(s).equals(stringToMap(t));
    }

    private Map<Character, Integer> stringToMap(String s) {
        Map<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if (map.containsKey(s.charAt(i))) {
                Integer cnt = map.get(s.charAt(i));
                cnt++;
                map.replace(s.charAt(i), cnt);
            } else {
                map.put(s.charAt(i), 1);
            }
        }
        return map;
    }
}