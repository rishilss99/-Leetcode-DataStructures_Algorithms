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

// class Solution {
// public:
//     vector<int> result;
//     bool isValidBST(TreeNode* root) {
//         if(!root)
//             return true;
//         if(!root->left && !root->right)
//             return true;
//         inordertraversal(root);
//         int k = 1;
//         int prev = result.front();
//         while(k<result.size()){
//             cout<<k<<endl;
//             if(result[k]<=prev)
//                 return false;
//             prev = result[k];
//             k++;
//         }
//         return true;
//     }
    
//     void inordertraversal(TreeNode *root){
//         if(root->left)
//             inordertraversal(root->left);
//         result.push_back(root->val);
//         if(root->right)
//             inordertraversal(root->right);
//     }
// };

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, -21215, -21215);
    }
    
    bool helper(TreeNode *root, int lower, int upper){
        if(!root)
            return true;
        int val = root->val;
        cout<<val<<" "<<lower<<endl;
        if(lower!=-21215 && val<=lower) return false;
        if(upper!=-21215 && val>=upper) return false;
        
        if(!helper(root->left,lower,val)) return false;
        if(!helper(root->right,val,upper)) return false;
        return true;
    }
};

