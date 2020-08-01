class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if(!root)
            return result;
        queue<Node*> nodes;
        nodes.push(root);
        int steps = 0;
        while(!nodes.empty()){
            int size = nodes.size();
            vector<int> level;
            for(int i = 0;i<size;i++){
                root = nodes.front();
                nodes.pop();
                level.push_back(root->val);
                for(auto itr = root->children.begin();itr<root->children.end();itr++)
                    nodes.push(*itr);
            }
            result.push_back(level);
            steps++;
        }
        return result;
    }
};