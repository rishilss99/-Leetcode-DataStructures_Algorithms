class TrieNode{
public:
    string s;
    int sum = 0;
    bool complete_word = false;
    TrieNode *children[26] = {};
    TrieNode(){
        s = "";
    }
    TrieNode(TrieNode *previous, char k){
        s = previous->s;
        s+=k;
    }
};


class MapSum {
public:
    /** Initialize your data structure here. */
    TrieNode *root;
    MapSum() {
        root = new TrieNode;
    }
    
    void insert(string key, int val) {
        TrieNode *curr;
        int diff = 0;
        if(search(key, curr)){
            diff = curr->sum;
        }
        curr = root;
        for(int i = 0;i<key.length();i++){
            if(curr->children[key[i] - 'a'] == NULL)
                curr->children[key[i] - 'a'] = new TrieNode(curr, key[i]);
            curr = curr->children[key[i] - 'a'];
            if(diff)
                curr->sum -= diff;
            curr->sum += val;
        }
        curr->complete_word = true;
    }
    
    int sum(string prefix) {
        TrieNode *curr = root;
        for(int i = 0;i<prefix.length();i++){
            if(curr->children[prefix[i] - 'a'] == NULL)
                return 0;
            curr = curr->children[prefix[i] - 'a'];
        }
        return curr->sum;
    }
    
    bool search(string key, TrieNode* &curr){
        curr = root;
        for(int i = 0;i<key.length();i++){
            if(curr->children[key[i] - 'a'] == NULL)
                return false;
            curr = curr->children[key[i] - 'a'];
        }
        return curr->complete_word;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */