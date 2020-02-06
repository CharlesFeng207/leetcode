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

        // key 为需求的数值，value 为伙伴的索引
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            if (map.find(n) != map.end())
            {
                return {map[n], i};
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
