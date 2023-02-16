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
    int ans=1000000;
    TreeNode* prv=NULL;
    void difCalculate(TreeNode *root){
        if(root==NULL) return;
        difCalculate(root->left);
       
        if(prv!=NULL){
            ans=min(ans,root->val-prv->val);
        }
        prv=root;
        difCalculate(root->right);
        return;
    }
    int getMinimumDifference(TreeNode* root) {
        difCalculate(root);
        return ans;
    }
};