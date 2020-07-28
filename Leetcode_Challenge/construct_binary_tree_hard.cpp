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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty())
            return NULL;
        return createTree(inorder, postorder, 0, inorder.size(), 0, postorder.size());
    }
    
    TreeNode* createTree(vector<int> &inorder, vector<int> &postorder, int start1, int end1, int start2, int end2){
        if(start1 == end1){
            TreeNode *curr = NULL;
            return curr;
        }
        int curr_val = postorder[end2-1];
        TreeNode *curr = new TreeNode(curr_val);
        cout<<curr_val<<endl;
        // if(start1 + 1 == end1){
        //     curr->left = NULL;
        //     curr->right = NULL;
        //     return curr;
        // }
        int inorder_left_end = start1;
        while(inorder[inorder_left_end] !=  curr_val)
            inorder_left_end++;
        int postorder_left_end = inorder_left_end-start1;
        curr->left = createTree(inorder, postorder, start1, inorder_left_end, start2, start2+postorder_left_end);
        curr->right = createTree(inorder, postorder, inorder_left_end+1, end1, start2+postorder_left_end, end2-1);
        return curr;
    }
    
    
};