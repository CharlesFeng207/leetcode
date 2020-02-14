/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++)
        {
            result.emplace_back(i + 1);
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                {
                    result[i][j] = 1;
                }
                else
                {
                    result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
                }
            }
        }
        return result;
    }
};
// @lc code=end
