/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            while(sz>=1){
                auto tp=q.front();q.pop();
                if(sz-1>0){tp->next=q.front();}
                
                if(tp->left) q.push(tp->left);
                if(tp->right) q.push(tp->right);
                sz--;
            }
        }
        return root;
    }
};