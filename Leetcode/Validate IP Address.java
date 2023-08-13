/*
Validate IP Address
https://www.leetcode.com/problems/validate-ip-address
*/

class Solution {
    public String validIPAddress(String queryIP) {
        StringBuilder cur = new StringBuilder();
        int IPv4Cnt = 0;
        int IPv6Cnt = 0;

        String IPv4Ans = "IPv4";
        String IPv6Ans = "IPv6";
        String invalidAns = "Neither";

        for (int i = 0; i < queryIP.length(); i++) {
            char curChar = queryIP.charAt(i);

            if (Character.isAlphabetic(curChar)) {
                if (IPv4Cnt != 0) return invalidAns;
                if (Character.toLowerCase(curChar) > 'f') return invalidAns;

                cur.append(curChar);
            } else if (Character.isDigit(curChar)) {
                cur.append(curChar);
            } else if (curChar == '.') {
                if (IPv6Cnt != 0) return invalidAns;

                if (cur.length() > 1 && cur.charAt(0) == '0') return  invalidAns;
                try {
                    if (Integer.parseInt(cur.toString()) > 255) return invalidAns;
                } catch (NumberFormatException e) {
                    return invalidAns;
                }

                cur = new StringBuilder();
                IPv4Cnt++;
            } else if (curChar == ':') {
                if (IPv4Cnt != 0) return invalidAns;

                if (cur.length() > 4 || cur.length() == 0) return invalidAns;

                cur = new StringBuilder();
                IPv6Cnt++;
            } else {
                return invalidAns;
            }

            if (i == queryIP.length() - 1) {
                if (cur.length() == 0) return invalidAns;

                if (IPv4Cnt > 0) {
                    if (IPv4Cnt > 3) return  invalidAns;
                    if (cur.length() > 1 && cur.charAt(0) == '0') return  invalidAns;
                    if (Integer.parseInt(cur.toString()) > 255) return invalidAns;
                    IPv4Cnt++;
                } else {
                    if (IPv6Cnt > 7) return invalidAns;
                    if (cur.length() > 4 || cur.length() == 0) return invalidAns;
                    if (Character.toLowerCase(curChar) > 'f') return invalidAns;
                    IPv6Cnt++;
                }

            }
        }

        if (IPv6Cnt > 0) {
            return IPv6Cnt == 8 ? IPv6Ans : invalidAns;
        } else {
            return IPv4Cnt == 4 ? IPv4Ans : invalidAns;
        }
    }
}