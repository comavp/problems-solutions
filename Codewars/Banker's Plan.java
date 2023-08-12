/*
Banker's Plan
https://www.codewars.com/kata/56445c4755d0e45b8c00010a
*/

public class BankerPlan {
    
    public static boolean fortune(int f0, double p, int c0, int n, double i) {
        double fPrev = f0;
        double cPrev = c0;
        for (int cnt = 0; cnt < n - 1; cnt++) {
            int fCur = (int)(fPrev + fPrev * p / 100 - cPrev);
            if (fCur < 0) return false;
            fPrev = fCur;
            cPrev += cPrev * i / 100;
        }
        return true;
    }
}