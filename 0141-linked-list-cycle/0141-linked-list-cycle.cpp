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
        if(head==nullptr||head->next==nullptr) return false;
        
        ListNode* first = head;
        ListNode* last = head;
        
        while(first->next) {
            first = first->next;
            if(first->next) {
                first = first->next;
                last = last->next;
            }
            if(first==last) return true;
        }
        
        return false;
    }
};