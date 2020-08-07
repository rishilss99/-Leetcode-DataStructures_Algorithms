class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> hashset;
        
        for(int k : nums1)
            hashset.insert(k);
        
        for(int i : nums2)
            hashset.erase(i);
        
        for(int j : nums1){
            if(hashset.count(j) < 1){
                hashset.insert(j);
                result.push_back(j);
            }
        }
        return result;
    }
};