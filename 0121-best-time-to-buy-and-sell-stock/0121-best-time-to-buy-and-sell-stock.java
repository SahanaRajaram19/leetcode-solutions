class Solution {
    public int maxProfit(int[] prices) {
        
        int l = 0;          // buy day
        int r = 1;          // sell day
        int maxProfit = 0;

        while (r < prices.length) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxProfit = Math.max(maxProfit, profit);
            } else {
                l = r;      // better buying day
            }
            r++;
        }
        return maxProfit;
    }
}
