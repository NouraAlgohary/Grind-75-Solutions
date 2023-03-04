class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left, right = prices[0], prices[0]
        profit, max_profit = 0, 0

        for price in prices:
            if price < left:
                left = price
                right = price
            elif price > right:
                right = price
                profit = right - left

                if profit > max_profit:
                    max_profit = profit
        
        return max_profit