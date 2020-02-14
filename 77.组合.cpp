/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution
{
public:
    void _combine(int start, int end, int k, vector<int> &buffer, vector<vector<int>> &result)
    {
        if (k == 0)
        {
            result.emplace_back(buffer);
        }
        else
        {
            for (int i = start; i <= end - k + 1; i++)
            {
                buffer[buffer.size() - k] = i;
                _combine(i + 1, end, k - 1, buffer, result);
            }
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        if (k < 1 || n < k)
            return {};
            
        vector<vector<int>> result;
        vector<int> buffer(k);

        _combine(1, n, k, buffer, result);
        return result;
    }
};
// @lc code=end
