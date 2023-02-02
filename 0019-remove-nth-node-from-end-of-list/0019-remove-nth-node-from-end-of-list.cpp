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
        int sz=0;
        ListNode* dummy=head;
        while(dummy!=0){
            sz++;
            dummy=dummy->next;
        }
        if(sz==n){
            return head->next;
        }
        //6 2
        //1 2 3 4 6
        n=sz-n-1;
        dummy=head;
        while(n--){
            dummy=dummy->next;
        }
        dummy->next=dummy->next->next;
        return head;
    }
};