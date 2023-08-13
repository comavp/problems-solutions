/*
String Compression
https://www.leetcode.com/problems/string-compression
*/

class Solution {
    public int compress(char[] chars) {
        int ans = 0;
        int writeIndex = 0, cnt = 1;

        for (int i = 1; i <= chars.length; i++) {
            if (i < chars.length && chars[i] == chars[i - 1]) {
                cnt++;
            } else {
                ans++;
                chars[writeIndex] = chars[i - 1];
                writeIndex++;

                if (cnt > 1) {
                    String cntStr = String.valueOf(cnt);
                    for (int j = 0; j < cntStr.length(); j++) {
                        chars[writeIndex] = cntStr.charAt(j);
                        ans++;
                        writeIndex++;
                    }
                    cnt = 1;
                }
            }
        }

        return ans;
    }
}