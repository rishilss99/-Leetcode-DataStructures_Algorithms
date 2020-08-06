class Node{
    int val;
    Node* left;
    Node* right;
    Node(int k){val = k; left = NULL; right = NULL;}
};

class Solution {
public:
    TreeNode *root = NULL;
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int k : nums){
            if(insertion(root,k))
                result.push_back(k);
        }
        return result;
    }
    
    bool insertion(TreeNode* &root, int key){
        if(!root){
            root = new TreeNode(key);
            return false;
        }
        if(root->val == key)
            return true;
        else if(root->val > key)
            return insertion(root->left,key);
        else
            return insertion(root->right,key);
    }
};