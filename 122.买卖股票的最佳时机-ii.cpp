/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution
{
public:
    // Greedy
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() < 2)
            return 0;

        int ret = 0;
        for (int i = 1; i < prices.size(); i++)
            ret += max(prices[i] - prices[i - 1], 0);

        return ret;
    }
};
// @lc code=end
