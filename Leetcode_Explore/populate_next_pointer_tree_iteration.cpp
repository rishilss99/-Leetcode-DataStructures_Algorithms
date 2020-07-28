/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        Node *current = root;
        queue<Node*> order;
        order.push(current);
        while(!order.empty()){
            int size = order.size();
            Node *previous;
            for(int i = 0;i<size;i++){
                root = order.front();
                order.pop();
                if(root->left)
                    order.push(root->left);
                if(root->right)
                    order.push(root->right); 
                if(i == 0){
                    previous = root;
                    root->next = NULL;
                }
                else if(i == size-1){
                    previous->next = root;
                    root->next = NULL;
                }
                else if(i<size){
                    previous->next = root;
                    previous = root;
                }
            }
        }
        return current;
    }
};