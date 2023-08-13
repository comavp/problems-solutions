/*
Best Time to Buy and Sell Stock
https://www.leetcode.com/problems/best-time-to-buy-and-sell-stock
*/

class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        int buyPrice = prices[0];
        
        for (int i = 1; i < prices.length; i++) {
            profit = Math.max(profit, prices[i] - buyPrice);
            if (prices[i] < buyPrice) {
                buyPrice = prices[i];
            }
        }
        
        return profit;
    }
}