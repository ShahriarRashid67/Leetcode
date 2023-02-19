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
    int height(TreeNode *root){
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void fun(TreeNode* root ,int lvl,vector<vector<int>>&vc){
        if(root==NULL) return;
        vc[lvl].push_back(root->val);
        fun(root->left,lvl+1,vc);
        fun(root->right,lvl+1,vc);
        return;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n=height(root);
        vector<vector<int>>vc(n);
        fun(root,0,vc);
        for(int i=0;i<vc.size();i++){
            if(i%2){
                reverse(vc[i].begin(),vc[i].end());
            }
        }
        return vc;
    }
};