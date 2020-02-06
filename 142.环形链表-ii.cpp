/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    // 如果发现已经遍历过的节点，则一定有环，而且之前记录的节点就是环的入口
    ListNode *detectCycle(ListNode *head)
    {
        unordered_set<ListNode *> set;
        auto t = head;
        while (t != nullptr)
        {
            auto iter = set.find(t);
            if (iter == set.end())
            {
                set.insert(t);
                t = t->next;
            }
            else
            {
                return *iter;
            }
        }

        return nullptr;
    }
};
// @lc code=end
