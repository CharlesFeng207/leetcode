/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        // It's s."size() - 1", means maximum index
        int half = (s.size() - 1) / 2;
        for (int i = 0; i <= half; i++)
        {
            swap(s[i], s[s.size() - 1 - i]);
        }
    }
};
// @lc code=end
