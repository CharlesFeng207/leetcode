/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    // 滑动窗口的思路，只用一次遍历
    int lengthOfLongestSubstring(string s)
    {
        // 记录每个字母最近出现的索引
        unordered_map<char, int> map;

        // 滑动窗口起始点
        int start = 0;

        int curlen = 0;
        int maxlen = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char t = s[i];
            if(map.find(t) == map.end())
                map[t] = -1; // 默认为-1

            // 此字符上一次不在窗口起始点后面，说明其已经在记录中，现在遇到它了
            if(start <= map[t])
            {
                // 更新滑动窗口起始点，为上一次这个字母的索引后面
                start = map[t] + 1;
                
                curlen = i - start + 1;
            }
            else
            {
                curlen ++;
            }

            map[t] = i;

            maxlen = max(curlen, maxlen);
        }

        return maxlen;
    }
};
// @lc code=end
