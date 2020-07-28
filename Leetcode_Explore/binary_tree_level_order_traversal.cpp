class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return result;
        queue<TreeNode*> order;
        order.push(root);
        while(!order.empty()){
            vector<int> vec_level;
            int size = order.size();
            for(int i = 0;i<size;i++){
                root = order.front();
                order.pop();
                if(root->left)
                    order.push(root->left);
                if(root->right)
                    order.push(root->right);
                vec_level.push_back(root->val);
            }
            result.push_back(vec_level);
        }
        return result;
    }
};