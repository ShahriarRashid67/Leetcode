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
    int mxdp=0;
    void mxDepth(TreeNode* root,int cnt){
        if(root == NULL) return;
        mxDepth(root->left,cnt+1);
        mxDepth(root->right,cnt+1);
        mxdp=max(cnt+1,mxdp);
    }
    int maxDepth(TreeNode* root) {
        mxdp=0; 
        mxDepth(root,0);
        return mxdp;
    }
};