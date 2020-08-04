class TrieNode{
public:
    string s;
    TrieNode *children[26] = {};
    bool complete_root = false;
    TrieNode(){s = "";}
    TrieNode(TrieNode *previous, char k){s = previous->s; s+=k;}
};

class Solution {
public:
    TrieNode *root = new TrieNode;
    string replaceWords(vector<string>& dict, string sentence) {
        for(string k : dict)
            insertion(k);
        stringstream str(sentence);
        string word, result = "";
        while(str>>word){
            TrieNode *curr = root;
            if(search_root(word, curr)){
                // cout<<curr->s<<endl;
                result += curr->s;
            }
            else
                result += word;
            result += " ";
        }
        result.pop_back();
        return result;
    }
    
    void insertion(string k){
        // cout<<"Ok"<<endl;
        TrieNode *curr = root;
        for(int i = 0;i<k.length();i++){
            if(curr->children[k[i] - 'a'] == NULL)
                curr->children[k[i] - 'a'] = new TrieNode(curr,k[i]);
            curr = curr->children[k[i] - 'a'];
        }
        curr->complete_root = true;
    }
    
    bool search_root(string k, TrieNode* &curr){
        for(int i = 0;i<k.length();i++){
            if(curr->children[k[i]-'a'] == NULL)
                return false;
            else if(curr->children[k[i]-'a']->complete_root){
                curr = curr->children[k[i] - 'a'];
                return true;
            }
            curr = curr->children[k[i] - 'a'];
        }
        return curr->complete_root;
    }
};