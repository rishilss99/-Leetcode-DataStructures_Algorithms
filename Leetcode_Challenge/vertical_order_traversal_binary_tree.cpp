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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return result;
        vector<int> vec_arr[2000];
        helper(vec_arr,root);
        for(int i = 0; i<2000;i++){
            if(vec_arr[i].size())
                result.push_back(vec_arr[i]);
        }
        return result;
    }
    
    void helper(vector<int> (&vec_arr)[2000], TreeNode *root){
        TreeNode *curr;
        int x;
        queue<TreeNode*> nodes;
        queue<int> x_coords;
        nodes.push(root);
        x_coords.push(999);
        while(!nodes.empty()){
            int size = nodes.size();
            map<int,int> level;
            cout<<"New Level"<<endl;
            for(int i = 0;i<size;i++){
                curr = nodes.front();
                cout<<curr->val<<" ";
                nodes.pop();
                x = x_coords.front();
                x_coords.pop();
                if(curr->left){
                    nodes.push(curr->left);
                    x_coords.push(x-1);
                }
                if(curr->right){
                    nodes.push(curr->right);
                    x_coords.push(x+1);
                }
                level[curr->val] = x;
            }
            for(auto itr = level.begin();itr!=level.end();itr++)
                vec_arr[itr->second].push_back(itr->first);
            
            cout<<endl;
        }
    }
};