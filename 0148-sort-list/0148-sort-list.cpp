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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *temp=NULL;
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        ListNode *l1=sortList(head);
        ListNode *l2=sortList(slow);
       return mergerL(l1,l2);
    }
    ListNode* mergerL(ListNode *l1,ListNode *l2){
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
      //  cout<<l1->val<<" "<<l2->val<<endl;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                curr->next=l1;
                l1=l1->next;
            }else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1!=NULL) curr->next=l1,l1=l1->next;
        if(l2!=NULL) curr->next=l2,l2=l2->next;
        return head->next;
    }
};