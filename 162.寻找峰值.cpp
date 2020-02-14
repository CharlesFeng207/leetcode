/*
 * @lc app=leetcode.cn id=162 lang=cpp
 *
 * [162] 寻找峰值
 */

// @lc code=start
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() < 2)
            return nums.size() - 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                return i - 1;
            }
        }

        return nums.size() - 1;
    }
};
// @lc code=end
