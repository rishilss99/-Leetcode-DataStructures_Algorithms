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
class BSTIterator {
public:
    TreeNode *current;
    stack<TreeNode*> nodes;
    BSTIterator(TreeNode* root) {
        current = root;
    }
    
    /** @return the next smallest number */
    int next() {
        int val;
        while(current){
            nodes.push(current);
            current=current->left;
        }
        current = nodes.top();
        nodes.pop();
        val = current->val;
        current = current->right;
        return val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return current || !nodes.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */