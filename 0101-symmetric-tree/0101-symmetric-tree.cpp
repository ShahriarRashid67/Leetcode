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
    bool Mirror(TreeNode* Left,TreeNode* Right){
        if(Left==NULL && Right==NULL){
            return 1;
        }
        if(Left && Right && Left->val ==Right->val){
            return Mirror(Left->left , Right->right) && Mirror(Left->right , Right->left);
        }
        return 0;
    }
    bool isSymmetric(TreeNode* root) {
        return Mirror(root,root);
    }
};