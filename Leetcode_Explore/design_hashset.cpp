class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> hash_set[1000];
    MyHashSet() {
        ;
    }
    
    void add(int key) {
        if(contains(key)){
            return;
        }
        int idx = key%1000;
        hash_set[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = key%1000;
        for(auto itr = hash_set[idx].begin();itr<hash_set[idx].end();itr++){
            if(*itr == key)
                hash_set[idx].erase(itr);
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int idx = key%1000;
        for(auto itr = hash_set[idx].begin();itr<hash_set[idx].end();itr++){
            if(*itr == key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */