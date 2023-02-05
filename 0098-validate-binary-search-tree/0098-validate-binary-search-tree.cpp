/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool fun(TreeNode *root,TreeNode *L=NULL,TreeNode *R=NULL){
        if(root==NULL) return 1;
        if((L && root->val<=L->val) || (R && root->val>=R->val)) return 0;
        return fun(root->left,L,root) && fun(root->right,root,R) ;
    }
    bool isValidBST(TreeNode* root) {
        return fun(root);
    }
};