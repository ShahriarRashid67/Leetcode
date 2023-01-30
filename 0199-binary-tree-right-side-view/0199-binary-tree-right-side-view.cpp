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
    void fun(int lvl,TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        if(lvl==ans.size()) ans.push_back(root->val);
        if(root->right !=NULL) fun(lvl+1,root->right,ans);
        if(root->left!=NULL) fun(lvl+1,root->left,ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int>ans;
        int lvl=0;
        fun(lvl,root,ans);
        return ans;
    }
};