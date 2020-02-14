/*
 * @lc app=leetcode.cn id=1046 lang=cpp
 *
 * [1046] 最后一块石头的重量
 */

// @lc code=start
class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        // multiset is the key, it's based on Red-Black tree
        multiset<int> myset(stones.begin(), stones.end());

        while (myset.size() > 1)
        {
            // prev(myset.end()) get last pointer.
            int w1 = *prev(myset.end());
            myset.erase(prev(myset.end()));

            int w2 = *prev(myset.end());
            myset.erase(prev(myset.end()));

            if (w1 != w2)
                myset.insert(w1 - w2);
        }

        return myset.empty() ? 0 : *myset.begin();
    }
};
// @lc code=end
