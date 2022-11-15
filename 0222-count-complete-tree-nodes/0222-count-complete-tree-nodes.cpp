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
    void Findermax(TreeNode* root,int &mx){
        if(root==NULL) return;
         mx++;
        if(root->left != NULL){
           Findermax(root->left,mx);
        }
        if(root->right!= NULL){
            Findermax(root->right,mx);
        }
        
    }
    int countNodes(TreeNode* root) {
        int mx=0;
        Findermax(root,mx);
        return mx;
    }
};