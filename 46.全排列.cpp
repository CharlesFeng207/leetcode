/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution
{
public:
    void _permute(vector<int> &nums, int startIndex, vector<vector<int>> &result)
    {
        if (nums.size() - 1 == startIndex)
        {
            result.emplace_back(nums);
        }
        else
        {
            for (int i = startIndex; i < nums.size(); i++)
            {
                swap(nums[startIndex], nums[i]);
                _permute(nums, startIndex + 1, result);
                swap(nums[startIndex], nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        _permute(nums, 0, result);
        return result;
    }
};
// @lc code=end
