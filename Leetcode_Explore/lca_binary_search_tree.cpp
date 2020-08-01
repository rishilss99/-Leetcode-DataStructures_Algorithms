/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        stack<TreeNode*> p_tree;
        stack<TreeNode*> q_tree;
        traversal(root,p,p_tree);
        traversal(root,q,q_tree);
        while(q_tree.size()!=p_tree.size()){
            if(q_tree.size()>p_tree.size())
                q_tree.pop();
            else
                p_tree.pop();
        }
        while(q_tree.top()!=p_tree.top()){
            q_tree.pop(); p_tree.pop();
        }
        return q_tree.top();
        
    }
    
    void traversal(TreeNode* root, TreeNode* target, stack<TreeNode*> &tree){
        tree.push(root);
        if(target->val == root->val){
            return;
        }
        else if(target->val > root->val){
            traversal(root->right,target,tree);
        }
        else{
            traversal(root->left,target,tree);
        }
        return;
    }
    
};