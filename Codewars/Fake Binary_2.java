/*
Fake Binary
https://www.codewars.com/kata/57eae65a4321032ce000002d
*/

public class FakeBinary {
    public static String fakeBin(String numberString) {
        String res = "";
        for (int i = 0; i < numberString.length(); i++) {
            if (numberString.charAt(i) < '5') {
                res += '0';
            } else {
                res += '1';
            }
        }
        return res;
    }
}