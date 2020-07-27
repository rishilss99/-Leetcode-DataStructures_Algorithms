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
    bool result = true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return result;
        preorderTraversal(p,q);
        return result;
    }
    
    void preorderTraversal(TreeNode *p, TreeNode *q){
        if((!p && q) || (!q && p)){
            result = false;
            return;
        }
        else if(!p && !q)
            return;
        if(p->val != q->val){
            result = false;
            return;
        }
        preorderTraversal(p->left, q->left);
        preorderTraversal(p->right, q->right);
    }
};