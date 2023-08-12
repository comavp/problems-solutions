/*
Paginating a huge book
https://www.codewars.com/kata/55905b7597175ffc1a00005a
*/

public class BookNum {
    public static long pageDigits(long pages) {        
        long rTotal = 0;
        long numberOfDigits = Long.toString(pages).length();
        long left = (long) Math.pow(10, numberOfDigits - 1);
        long right = pages;
        while (numberOfDigits > 0) {
            rTotal += (right - left + 1) * numberOfDigits;
            left /= 10;
            right = left * 10 - 1;
            numberOfDigits--;
        }
        return rTotal;
    }
    
}