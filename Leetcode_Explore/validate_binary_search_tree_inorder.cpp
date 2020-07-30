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
    vector<int> result;
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        if(!root->left && !root->right)
            return true;
        inordertraversal(root);
        int k = 1;
        int prev = result.front();
        while(k<result.size()){
            cout<<k<<endl;
            if(result[k]<=prev)
                return false;
            prev = result[k];
            k++;
        }
        return true;
    }
    
    void inordertraversal(TreeNode *root){
        if(root->left)
            inordertraversal(root->left);
        result.push_back(root->val);
        if(root->right)
            inordertraversal(root->right);
    }
};