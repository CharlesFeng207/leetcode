/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution
{
public:
    vector<int> countBits(int num)
    {
        vector<int> dp(1, 0);
        while (dp.size() - 1 < num)
        {
            int t = dp.size();
            if ((t & 1) == 1)
            {
                // Odd: In binary system, the 1 count of odd number is more 1 than it's previous even number.  
                dp.push_back(dp[t - 1] + 1);
            }
            else
            {
                // Even：In binary system, an even number must be end up with zero.
                dp.push_back(dp[t >> 1]);
            }
        }

        return dp;
    }
};
// @lc code=end
