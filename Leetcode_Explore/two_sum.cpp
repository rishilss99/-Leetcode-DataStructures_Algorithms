class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        vector<int> result;
        for(int i = 0;i<nums.size();i++){
            if(hash_map.count(target-nums[i])){
                result.push_back(hash_map[target-nums[i]]);
                result.push_back(i);
                break;
            }
            hash_map.insert({nums[i],i});
        }
        return result;
    }
};