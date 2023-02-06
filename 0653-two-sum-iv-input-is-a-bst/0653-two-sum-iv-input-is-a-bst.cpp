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
    unordered_map<int,int>mp;
    void fun(TreeNode* root,int k,int &ans){
        if(root==NULL) return;
        int rem=k-root->val;
       // cout<<rem<<" "<<root->val<<endl;
        if(mp[rem]==1){ ans=1;}
        mp[root->val]=1;
        fun(root->left,k,ans);
        fun(root->right,k,ans);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        int ans=0;
        fun(root,k,ans);
        return ans;
    }
};