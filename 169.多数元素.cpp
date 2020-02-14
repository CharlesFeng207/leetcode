/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution
{
public:
    // time 0(n), space(1)
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int majority = 0;

        for (auto n : nums)
        {
            if (n == majority)
            {
                count++;
            }
            else
            {
                count--;
            }

            if (count < 0)
            {
                majority = n;
                count = 1;
            }
        }

        return majority;
    }
};
// @lc code=end
