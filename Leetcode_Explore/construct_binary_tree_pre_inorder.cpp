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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.empty())
            return NULL;
        return helper(preorder, inorder, 0, preorder.size(), 0, inorder.size());
    }
    
    TreeNode* helper(vector<int> &preorder, vector<int> &inorder, int start1, int end1, int start2, int end2){
        if(start1 == end1)
            return NULL;
        int curr_val = preorder[start1];
        cout<<curr_val<<endl;
        TreeNode *curr = new TreeNode(curr_val);
        int inorder_left_end = start2;
        while(inorder[inorder_left_end] != curr_val)
            inorder_left_end++;
        int preorder_left_end = inorder_left_end - start2 + 1;
        curr->left = helper(preorder, inorder, start1+1, start1 + preorder_left_end,  start2, inorder_left_end);
        curr->right = helper(preorder, inorder, start1 + preorder_left_end, end1, inorder_left_end+1,end2);
        return curr;
    }
};