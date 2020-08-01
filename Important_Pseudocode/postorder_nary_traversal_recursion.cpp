class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        postorder_traversal(result, root);
        return result;
    }
    
    void postorder_traversal(vector<int> &result, Node *root){
        if(!root)
            return;
        for(int i = 0;i<root->children.size();i++)
            postorder_traversal(result, root->children[i]);
        result.push_back(root->val);
        return;
    }
};