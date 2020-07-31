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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            root = new TreeNode(val);
            return root;
        }
        TreeNode *head = root;
        helper(root,val);
        return head;
    }
    
    void helper(TreeNode* root, int val){
        if(val > root->val){
            if(!root->right){
                root->right = new TreeNode(val);
                return;
            }
            insertIntoBST(root->right,val);
        }
        else{
            if(!root->left){
                root->left = new TreeNode(val);
                return;
            }
            insertIntoBST(root->left,val);
        }
        return;
    }
};