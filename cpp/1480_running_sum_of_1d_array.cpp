class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> output;
        int sum = 0;
        for(const auto& num : nums)
            output.emplace_back(sum += num);
        
        return output;
        
    }
};