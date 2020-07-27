class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> parentheses;
        if(n == 0)
            return parentheses;
        helper(parentheses,n);
        return parentheses;
    }
    
    //k is used to track no. of '('
    //i is used to track that no. of '(' == no. of ')'
    void helper(vector<string> &list, int n, int i = 1, int k = 1, string paren = "("){
        if(paren.length() == 2*n){
            if(i == 0)
                list.push_back(paren);
            return;
        }
        else if(paren.length() < 2*n){
            if(k < n){
                helper(list,n,i+1,k+1,paren+'(');
            }
            if(i > 0){
                helper(list,n,i-1,k,paren+')');
            }
        }   
    }
};