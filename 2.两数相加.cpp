/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    // 主要是注意链表遍历技巧和进位的问题
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *result = nullptr;

        // 表示上一轮的临时节点，暂存处理next指向
        ListNode *curNode = nullptr;

        // 进位
        int carry = 0;

        // 初始化临时节点
        auto t1 = l1;
        auto t2 = l2;
        while (t1 != nullptr || t2 != nullptr || carry != 0)
        {
            // 计算当前节点的值，并生成carry，以供下一轮使用（表示进位）
            int v1 = t1 == nullptr ? 0 : t1->val;
            int v2 = t2 == nullptr ? 0 : t2->val;
            int v3 = v1 + v2 + carry;
            carry = v3 >= 10 ? 1 : 0;
            v3 = v3 % 10;

            // 生成临时节点，处理节点的连接问题
            ListNode *node = new ListNode(v3);
            if (result == nullptr)
                result = node;

            if (curNode != nullptr)
                curNode->next = node;

            curNode = node;

            // 临时节点步进
            if (t1 != nullptr)
                t1 = t1->next;
            if (t2 != nullptr)
                t2 = t2->next;
        }

        return result;
    }
};
// @lc code=end
