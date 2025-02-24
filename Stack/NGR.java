class Solution {
    public int maxProfit(int[] prices) {
        Stack<Integer> stck = new Stack<>();

        int max = -1;
        int res = 0;
        int n = prices.length;

        for(int i = n-1; i >= 0; i--) {
            if(stck.isEmpty()) {
                stck.push(prices[i]);
                continue;
            }
            if(stck.peek()> prices[i]) {
                max = Math.max(max, stck.peek());
            } else {
                stck.pop();
                stck.push(prices[i]);
            }
            res = Math.max(res, max - prices[i]);
        }
    return res;
    }
}
