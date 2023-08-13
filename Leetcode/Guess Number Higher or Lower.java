/*
Guess Number Higher or Lower
https://www.leetcode.com/problems/guess-number-higher-or-lower
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        int l = 0, r = n, m = 0;
        while (r - l > 1) {
            m = (int)(((long)l + r) / 2);
            if (guess(m) < 1) {
                r = m;
            } else {
                l = m;
            }
        }
        return r;
    }
}