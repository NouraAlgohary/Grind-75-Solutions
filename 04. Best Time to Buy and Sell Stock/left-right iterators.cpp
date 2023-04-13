class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = prices[0], right = prices[0], profit = 0, max_profit = 0;

        for(int price: prices)
        {
            if(price < left)
                {
                left = price;
                right = price;
                }
            else if(right < price)
            {
                right = price;
                profit = right - left;
            }
            if(profit > max_profit)
                max_profit = profit;
        }

        return max_profit;
    }
};