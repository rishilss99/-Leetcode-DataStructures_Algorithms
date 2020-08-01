class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        if(!root)
            return result;
        stack<Node*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            root = nodes.top();
            nodes.pop();
            result.push_back(root->val);
            if(root->right)
                nodes.push(root->right);
            if(root->left)
                nodes.push(root->left);
        }
        return result;
        
    }
};