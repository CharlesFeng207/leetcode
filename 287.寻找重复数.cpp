/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;
        for (auto n : nums)
        {
            if (set.find(n) != set.end())
                return n;
            set.insert(n);
        }
        return 0;
    }
};
// @lc code=end
