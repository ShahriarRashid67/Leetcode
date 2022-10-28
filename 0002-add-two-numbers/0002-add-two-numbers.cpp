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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sumList=new ListNode(0);
        ListNode* cur=sumList;
        int carry=0;
        int x,y;
        while(l1 != NULL || l2!=NULL || carry!=0 ){
           if(l1){
               x=l1->val;
           }else{
               x=0;
           }
           if(l2){
               y=l2->val;
           }else{
               y=0;
           }
           int sum=x+y+carry; 
           carry=sum/10;
           cur->next = new ListNode(sum % 10);
           cur=cur->next;
           l1 = l1 ? l1->next : nullptr;
           l2 = l2 ? l2->next : nullptr;
        }
        return sumList->next;
    }
};