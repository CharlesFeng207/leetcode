/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        static vector<vector<char>> config{{'{', '}'}, {'[', ']'}, {'(', ')'}};

        stack<char> st;

        for (auto c : s)
        {
            for (auto &v : config)
            {
                if (v[0] == c) // 开括号判定
                {
                    st.push(c);
                }
                else if (v[1] == c) // 关括号判定
                {
                    if (st.empty() || st.top() != v[0])
                        return false;
                    st.pop();
                }
            }
        }

        // 最后看没有待处理的括号
        return st.empty();
    }
};
// @lc code=end
