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
    void fun(TreeNode *root, vector<int>&vc){
        if(root==NULL) return;
        fun(root->left,vc);
        vc.push_back(root->val);
        fun(root->right,vc);
    }
    int minDiffInBST(TreeNode* root) {
        int mn=INT_MAX;
        vector<int>inorder;
        fun(root,inorder);
        int n=inorder.size();
        for(int i=0;i<n-1;i++){
            mn=min(mn,inorder[i+1]-inorder[i]);
        }
        return mn;
    }
};