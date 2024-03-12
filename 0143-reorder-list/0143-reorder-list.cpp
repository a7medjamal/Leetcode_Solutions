/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next) return;
        
        ListNode* tmp = head;
        while(tmp->next->next) tmp=tmp->next;
        
        
        tmp->next->next = head->next;
        head->next = tmp->next;
        
        tmp->next = NULL;
        
        reorderList(head->next->next);
    }
};