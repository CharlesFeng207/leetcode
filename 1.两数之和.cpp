/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        if (nums.size() < 2)
            return {};

        // Requred value -> exist index
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            if (map.find(n) != map.end())
            {
                return {map[n], i}; // Exist index come first
            }
            else
            {
                map[target - n] = i;
            }
        }

        return {};
    }
};
// @lc code=end
