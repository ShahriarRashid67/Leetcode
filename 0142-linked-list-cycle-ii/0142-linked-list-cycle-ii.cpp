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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        unordered_map<ListNode*,int>mp;
        ListNode *dummy=head;
        while(mp[dummy]==0 && dummy!=NULL){
            mp[dummy]=1;
            dummy=dummy->next;
        }
        return dummy;
    }
};