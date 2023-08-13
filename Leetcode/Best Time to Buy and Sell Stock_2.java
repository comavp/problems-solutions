/*
Best Time to Buy and Sell Stock
https://www.leetcode.com/problems/best-time-to-buy-and-sell-stock
*/

class Solution {
    public int maxProfit(int[] prices) {
        int currentMin = prices[0];
        int ans = 0;

        for (int i = 1; i < prices.length; i++) {
            if (prices[i] < currentMin) {
                currentMin = prices[i];
            }
            ans = Math.max(ans, prices[i] - currentMin);
        }
        
        return ans;
    }
}