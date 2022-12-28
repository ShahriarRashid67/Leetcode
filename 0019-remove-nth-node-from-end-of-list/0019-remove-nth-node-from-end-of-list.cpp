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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* dummy=head;
        int size=1;
        while(dummy->next!=NULL){
            size++;
            dummy=dummy->next;
        }
        if(n==size){
           return head->next;
        }
        //cout<<size<<" ";
        int k=size-n-1;
        ListNode* last= head;
        while(k--){
            last=last->next;
        }
        last->next=last->next->next;
        return head;
    }
};