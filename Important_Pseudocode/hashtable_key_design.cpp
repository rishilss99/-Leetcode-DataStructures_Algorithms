class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashmap;
        vector<vector<string>> result;
        string temp;
        for(string s : strs){
            temp = s;
            sort(temp.begin(),temp.end());
            hashmap[temp].push_back(s);
        }
        for(auto itr = hashmap.begin();itr!=hashmap.end();itr++)
            result.push_back(itr->second);
        return result;
    }
};