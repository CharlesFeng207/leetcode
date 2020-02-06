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
                // 奇数：二进制表示中，奇数一定比前面那个偶数多一个 1，因为多的就是最低位的 1。
                dp.push_back(dp[t - 1] + 1);
            }
            else
            {
                // 偶数：二进制表示中，偶数中 1 的个数一定和除以 2 之后的那个数一样多。因为最低位是 0，除以 2 就是右移一位，也就是把那个 0 抹掉而已，所以 1 的个数是不变的。
                dp.push_back(dp[t >> 1]);
            }
        }

        return dp;
    }
};
// @lc code=end
