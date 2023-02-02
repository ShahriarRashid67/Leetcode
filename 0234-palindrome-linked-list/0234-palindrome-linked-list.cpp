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
    bool isPalindrome(ListNode* head) {
        vector<int>ar;
        while(head!=NULL){
            ar.push_back(head->val);
            head=head->next;
        }
        int l=0,r=ar.size()-1;
        while(l<r){
            if(ar[l]!=ar[r]){
                return 0;
            }
            l++,r--;
        }
        return 1;
    }
};
//1 2 3 2 1