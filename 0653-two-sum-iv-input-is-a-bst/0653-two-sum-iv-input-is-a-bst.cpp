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
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return 0;
        unordered_set<int>seen;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            auto tmp=st.top();
            st.pop();
            if(seen.count(k-(tmp->val))) return 1;
            seen.insert(tmp->val);
            
            if(tmp->left) st.push(tmp->left);
            if(tmp->right) st.push(tmp->right);
        }
        return 0;
    }
};