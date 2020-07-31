class Node : public TreeNode{
public:
    Node *left;
    Node *right;
    int cnt;
    Node(int val) : TreeNode(val){
        cnt = 1;
        left = NULL;
        right = NULL;
    }
};

class KthLargest {
public:
    Node *root = NULL;
    int k_th;
    KthLargest(int k, vector<int>& nums) {
        k_th = k;
        for(int i = 0;i<nums.size();i++)
            root = insertion(root, nums[i]);
    }
    
    int add(int val) {
        root = insertion(root, val);
        return klargest(root, k_th);
    }
    
    Node* insertion(Node *root, int val){
        if(!root)
            return new Node(val);
        if(root->val >= val)
            root->left = insertion(root->left, val);
        else if(root->val <= val)
            root->right = insertion(root->right, val);
        root->cnt++;
        return root;
    }
    
    int klargest(Node* root, int k){
        int m = !root->right?1:root->right->cnt + 1;
        if(k - m == 0)
            return root->val;
        else if(k - m > 0)
            return klargest(root->left,k-m);
        else
            return klargest(root->right,k);
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */