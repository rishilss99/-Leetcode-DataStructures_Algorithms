class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        if(!root)
            return result;
        stack<Node*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            root = nodes.top();
            nodes.pop();
            result.push_back(root->val);
            for(auto itr = root->children.begin();itr<root->children.end();itr++)
                nodes.push(*itr);
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};