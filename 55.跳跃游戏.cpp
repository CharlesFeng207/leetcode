/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution
{
public:
    // Greedy
    bool canJump(vector<int> &nums)
    {
        int reach = 0;

        for (int i = 0; i < nums.size() && reach < nums.size(); i++)
        {
            if (i <= reach)
            {
                reach = max(reach, i + nums[i]);
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end
