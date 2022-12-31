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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=head;
        if(dummy==NULL || dummy->next==NULL) return head;
        while(dummy && dummy->next != NULL){
        swap(dummy->val,dummy->next->val);
            dummy=dummy->next->next;
        }
        return head;
    }
};