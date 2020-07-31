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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return root;
        if(root->val == key){
            return helper(root);
        }
        if(root->val < key){
            root->right = deleteNode(root->right, key);
        }
        else{
            root->left = deleteNode(root->left, key);
        }
        return root;
    }
    
    TreeNode* helper(TreeNode *root){
        if(!root->left && !root->right){
            cout<<"Hey0"<<endl;
            delete root;
            return NULL;
        }
        else if(!root->left || !root->right){
            cout<<"Hey1"<<endl;
            root = !root->left?root->right:root->left;
            return root;
        }
        else{
            TreeNode *head = root;
            root = root->right;
            if(!root->left){
                head->val = root->val;
                head->right = root->right;
                delete root;
            }
            else{
                stack<TreeNode*> nodes;
                while(root){
                    nodes.push(root);
                    root=root->left;
                }
                root = nodes.top();
                head->val = root->val;
                nodes.pop();
                TreeNode* prev_node = nodes.top();
                prev_node->left = helper(root);
            }
            return head;
        }
            
    } 
};