class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        preorder_traversal(result, root);
        return result;
    }
    
    void preorder_traversal(vector<int> &result, Node *root){
        if(!root)
            return;
        result.push_back(root->val);
        for(int i = 0;i<root->children.size();i++)
            preorder_traversal(result,root->children[i]);
        return;
    }
};