/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root, int levels = 1) {
        if(!root)
            return 0;
        int max = levels;
        for(auto itr = root->children.begin();itr<root->children.end();itr++){
            int temp = maxDepth(*itr,levels+1);
            max = temp>max?temp:max;
        }
        return max;
    }
};