/*
Best Time to Buy and Sell Stock
https://www.leetcode.com/problems/best-time-to-buy-and-sell-stock
*/

class Solution {
    public int maxProfit(int[] prices) {
        int minIndex = 0;
        int ans = 0;
        int[] dp = new int[prices.length];
        dp[0] = 0;

        for (int i = 1; i < prices.length; i++) {
            if (prices[i] < prices[minIndex]) {
                minIndex = i;
            }
            dp[i] = prices[i] - prices[minIndex];
        }

        for (int i = 0; i < dp.length; i++) {
            if (dp[i] > ans) {
                ans = dp[i];
            }
        }
        return ans;
    }
}