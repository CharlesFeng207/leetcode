/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.size() == 0)
        {
            return 0;
        }
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxleft = height[0];
        int maxright = height[n - 1];
        int ans = 0;

        while (left <= right)
        {
            maxleft = max(height[left], maxleft);
            maxright = max(height[right], maxright);
            if (maxleft < maxright)
            {
                ans += maxleft - height[left];
                left++;
            }
            else
            {
                ans += maxright - height[right];
                right--;
            }
        }
        return ans;
    }
};
// @lc code=end
