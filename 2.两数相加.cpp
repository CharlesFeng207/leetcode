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
    // The trick is how to go through linklist and don't forget carry.
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *result = nullptr;

        // curNode pointer is to handle next pointer
        ListNode *curNode = nullptr;

        int carry = 0;

        // Init temp pointers
        auto t1 = l1;
        auto t2 = l2;
        while (t1 != nullptr || t2 != nullptr || carry != 0)
        {
            // Figure out current node value and carry for next turn use.
            int v1 = t1 == nullptr ? 0 : t1->val;
            int v2 = t2 == nullptr ? 0 : t2->val;
            int v3 = v1 + v2 + carry;
            carry = v3 >= 10 ? 1 : 0;
            v3 = v3 % 10;

            // Make a temp node and connect each parts
            ListNode *node = new ListNode(v3);
            if (result == nullptr)
                result = node;

            if (curNode != nullptr)
                curNode->next = node;

            curNode = node;

            // Step forward temp pointers
            if (t1 != nullptr)
                t1 = t1->next;
            if (t2 != nullptr)
                t2 = t2->next;
        }

        return result;
    }
};
// @lc code=end
