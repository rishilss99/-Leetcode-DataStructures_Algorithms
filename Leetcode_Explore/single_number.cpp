class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int k : nums)
            num = num ^ k;
        return num;
    }
};