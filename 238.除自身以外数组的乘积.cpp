/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> result(nums.size(), 0);
        int zeroCount = 0;

        int product = 1;
        int zeroIndex = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                if (zeroIndex == -1)
                {
                    // Keep first zero index
                    zeroIndex = i;
                }
                else // If more than one zero, then result all is zero
                {
                    return result;
                }
            }
            else
            {
                product *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (zeroIndex == -1)
            {
                result[i] = product / nums[i];
            }
            else
            {
                if (zeroIndex == i)
                {
                    result[i] = product;
                }
                else
                {
                    result[i] = 0;
                }
                        }
        }

        return result;
    }
};
// @lc code=end
