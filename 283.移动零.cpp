/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            // [1, 0, 2] i++

            if (nums[j] != 0)
            {
                swap(nums[i++], nums[j]);
            }
        }
    }
};
// @lc code=end
