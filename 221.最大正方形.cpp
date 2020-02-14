/*
 * @lc app=leetcode.cn id=221 lang=cpp
 *
 * [221] 最大正方形
 */

// @lc code=start
class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int row = matrix.size();
        if (row == 0)
            return 0;

        int col = matrix[0].size();
        if (col == 0)
            return 0;

        int maxlen = 0;
        vector<vector<int>> dp(row, vector<int>(col, 0));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                char t = matrix[i][j];
                if (t == '0')
                {
                    dp[i][j] = 0;
                }
                else
                {
                    int left = j == 0 ? 0 : dp[i][j - 1];
                    int up = i == 0 ? 0 : dp[i - 1][j];
                    int leftup = i == 0 || j == 0 ? 0 : dp[i - 1][j - 1];
                    int len = min(min(left, up), leftup) + 1;
                    dp[i][j] = len;
                    maxlen = max(len, maxlen);
                }
            }
        }

        return maxlen * maxlen;
    }
};
// @lc code=end
