class TrieNode{
public:
    string s;
    bool complete_word = false;
    TrieNode* children[26] = {};
    TrieNode(){ s = ""; }
    TrieNode(TrieNode* previous, char k){ s=previous->s; s+=k; }
};

class Trie {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    Trie() {
        root = new TrieNode;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *curr = root;
        for(int i = 0;i<word.length();i++){
            if(curr->children[word[i] - 'a'] == NULL)
                curr->children[word[i] - 'a'] = new TrieNode(curr, word[i]);
            curr = curr->children[word[i] - 'a'];
        }
        curr->complete_word = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *curr = root;
        for(int i = 0;i<word.length();i++){
            if(curr->children[word[i] - 'a'] == NULL)
                return false;
            curr = curr->children[word[i] - 'a'];
        }
        return curr->complete_word;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *curr = root;
        for(int i = 0;i<prefix.length();i++){
            if(curr->children[prefix[i] - 'a'] == NULL)
                return false;
            curr = curr->children[prefix[i] - 'a'];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */