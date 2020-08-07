class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> hashmap;
        unordered_set<string> hashset;
        int min = INT32_MAX;
        vector<string> result;
        for(int i = 0;i<list1.size();i++){
            hashmap.insert({list1[i],i});
            hashset.insert(list1[i]);
        }
        for(int j = 0;j<list2.size();j++){
            if(!hashmap.count(list2[j]))
                continue;
            hashset.erase(list2[j]);
            hashmap[list2[j]]+=j;
            int temp = hashmap[list2[j]];
            if(temp<min)
                min = temp;
        }
        for(auto itr = hashmap.begin();itr!=hashmap.end();itr++){
            if(itr->second == min && hashset.count(itr->first) < 1)
                result.push_back(itr->first);
        }
        return result;
    }
};