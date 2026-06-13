class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int i = 0;
        int j = 1;

        while(i < n && j < n){
            while(j < n && prices[i] < prices[j]){
                profit = max(profit , prices[j] - prices[i]);
                j++;
            }
            i = j;
            j++;
        }

        return profit;
    }
};
