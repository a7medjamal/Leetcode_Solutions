/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    bool hasCycle(ListNode *head) {
        ListNode *tmp1 = head;
        ListNode *tmp2 = head;
        while (tmp1 != nullptr && tmp2 != nullptr && tmp2->next != nullptr)
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next->next;
            if (tmp1 == tmp2)
            {
                return true;
            }
        }
        return false;
    }
};