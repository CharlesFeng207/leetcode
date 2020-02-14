/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();

        // 高斯求和公式
        return n * (1 + n) / 2 - sum;
    }
};
// @lc code=end
