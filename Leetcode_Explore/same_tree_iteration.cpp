class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        if(!p || !q)
            return false;
        stack<TreeNode*> ptree;
        stack<TreeNode*> qtree;
        while(p || !ptree.empty()){
            while(p){
                ptree.push(p);
                if(!q)
                    return false;
                qtree.push(q);
                q = q->left;
                p = p->left;
                if(!p && q)
                    return false;
            }
            p = ptree.top();
            q = qtree.top();
            ptree.pop();
            qtree.pop();
            if(q->val != p->val)
                return false;
            p = p->right;
            q = q->right;
        }
        return true;
    }
};