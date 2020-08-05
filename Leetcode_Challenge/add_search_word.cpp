class TrieNode{
public:
    string s;
    unordered_map<char,TrieNode*> children;
    int max = 1;
    bool complete_word = false;
    TrieNode(){s = "";}
    TrieNode(TrieNode *previous, char k){s = previous->s; s+=k;}
};

class WordDictionary {
public:
    /** Initialize your data structure here. */
    TrieNode *root;
    WordDictionary() {
        root = new TrieNode;
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        TrieNode *curr = root;
        int length = word.length();
        for(char k : word){
            if(curr->children.find(k) == curr->children.end())
                curr->children[k] = new TrieNode(curr, k);
            curr = curr->children[k];
            if(curr->max < length)
                curr->max = length;
            length--;
            // cout<<curr->max<<endl;
        }
        curr->complete_word = true;
        
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        bool temp = backtrack(word, root);
        // cout<<temp<<endl;
        return temp;
    }
    
    bool backtrack(string &word, TrieNode *curr, int i = 0){
        // cout<<word[i]<<endl;
        if(i == word.length())
            return curr->complete_word;
        if(word[i] == '.'){
            // cout<<"Case 1"<<endl;
            if(curr->children.empty())
                return false;
            for(auto itr = curr->children.begin();itr!=curr->children.end();itr++){
                // cout<<itr->second->s<<endl;
                if(itr->second->max >= word.length() - i){
                    if(backtrack(word, itr->second, i+1))
                        return true;
                }
            }
            return false;
        }
        else{
            // cout<<"Case 2"<<endl;
            if(curr->children.find(word[i]) == curr->children.end()){
                // cout<<"Here1"<<endl;
                return false;
            }
            else if(curr->children[word[i]]->max >= word.length() - i){
                // cout<<"Here2"<<endl;
                return backtrack(word, curr->children[word[i]], i+1);
            }
            // cout<<curr->children[word[i]]->max<<endl;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */