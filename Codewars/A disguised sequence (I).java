/*
A disguised sequence (I)
https://www.codewars.com/kata/563f0c54a22b9345bf000053
*/

import java.math.BigInteger;

class HiddenSeq {
    
    public static BigInteger fcn(int n) {
        return new BigInteger("2").pow(n);
    }
}