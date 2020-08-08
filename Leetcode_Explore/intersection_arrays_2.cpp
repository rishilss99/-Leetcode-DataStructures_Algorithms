class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int[2]> hashmap;
        vector<int> result;
        for(int k : nums1.size()<nums2.size()?nums1:nums2)
            hashmap[k][0]++;
        for(int j : nums1.size()<nums2.size()?nums2:nums1){
            if(hashmap.count(j))
                hashmap[j][1]++;
        }
        for(auto itr = hashmap.begin();itr!=hashmap.end();itr++){
            if(itr->second[1]){
                int times = itr->second[1]<itr->second[0]?itr->second[1]:itr->second[0];
                while(times--)
                    result.push_back(itr->first);
            }
        }
        return result;
    }
};