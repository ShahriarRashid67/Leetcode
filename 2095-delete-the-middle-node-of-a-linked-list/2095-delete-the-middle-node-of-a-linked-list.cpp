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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy=head;
        //Size of LIST
        int size=0;
        while(dummy!=NULL){
            size++;
            dummy=dummy->next;
        }
        if(head->next==NULL) return NULL;
        int mid=(size/2)-1;
        ListNode* last = head;
        while(mid--){
        last=last->next;
        }
        last->next=last->next->next;
        return head;
    }
};