
/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        // character -> appear count
        unordered_map<char, int> map;

        for (auto c : s)
            map[c] += 1; // don't use map[c] ++

        for (int i = 0; i < s.size(); i++)
        {
            if (map[s[i]] == 1)
                return i;
        }

        return -1;
    }
};
// @lc code=end
