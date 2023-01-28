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
    ListNode* reverseList(ListNode* head) {
        stack<int>stk;
        ListNode* dummy=head;
        
        while(dummy!=NULL){
            stk.push(dummy->val);
            dummy=dummy->next;
        }
        ListNode* ans=head;
        while(ans!=NULL){
           int tp= stk.top();
            stk.pop();
               ans->val=tp;
            ans=ans->next;
        }
        return head;
    }
};