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
    void finder(TreeNode * root,int &k,int &element){
        if(root==NULL) return;
        finder(root->left,k,element);
        k--;
        if(k==0) element=root->val;
        finder(root->right,k,element);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        int element=0;
        finder(root,k,element);
        return element;
        }
};