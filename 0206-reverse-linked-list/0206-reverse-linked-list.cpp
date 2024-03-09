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
    ListNode* reverseList(ListNode* head) {
        ListNode* prv = NULL;
        ListNode* curr = head;
        ListNode* nxt;
        
        while(curr!=NULL) {
            nxt = curr->next;
            curr->next = prv;
            prv=curr;
            curr=nxt;
        }
        
        return prv;
    }
};