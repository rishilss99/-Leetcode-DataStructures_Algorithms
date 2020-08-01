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
            cout<<root->val<<endl;
            for(auto itr = root->children.rbegin();itr<root->children.rend();itr++)
                nodes.push(*itr);
            // for(int i = root->children.size() - 1;i>=0;i--)
            //     nodes.push(root->children[i]);
        }
        return result;
        
    }
};