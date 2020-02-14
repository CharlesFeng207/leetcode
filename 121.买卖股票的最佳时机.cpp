/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minimum = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minimum = min(minimum, prices[i]);
            profit = max(profit, prices[i] - minimum);
        }
        return profit;
    }
};
// @lc code=end
