/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    // Sliding window approach, O(n) complexity
    int lengthOfLongestSubstring(string s)
    {
        // Char -> last appear index 
        unordered_map<char, int> map;

        // Sliding window start index
        int start = 0;

        int curlen = 0;
        int maxlen = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char t = s[i];
            if(map.find(t) == map.end())
                map[t] = -1; // Default as -1

            // If this character has been counted
            if(start <= map[t])
            {
                // Change window start index to next
                start = map[t] + 1;
                
                // Recalculate current length
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
