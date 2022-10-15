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
    int mnDp;
    void dpFinder(TreeNode*root,int cnt){
        if(root==NULL)return;
        if((root->left==NULL) && (root->right==NULL)){
            mnDp=min(cnt,mnDp);
            return;
        }
        dpFinder(root->left,cnt+1);
        dpFinder(root->right,cnt+1);
        
    }
    int minDepth(TreeNode* root) {
        mnDp=INT_MAX/2;
        dpFinder(root,1);
        if(mnDp==(INT_MAX/2)) mnDp=0;
        return mnDp;
    }
};