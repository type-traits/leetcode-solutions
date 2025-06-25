class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int> mp;
        for(int num : nums)
            mp[num]++;
        int n = nums.size()/2;
        return std::find_if(mp.begin(), mp.end(), [n](const auto& pr){ return pr.second > n;})->first;
        
    }
};