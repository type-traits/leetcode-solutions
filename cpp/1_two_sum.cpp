class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto copy = nums;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<int> output;
        int num1 = 0;
        if(nums.empty())
            return output;
        for(int i= 0; i< size-1; i++)
        {
            if(std::binary_search(nums.begin(), nums.end(), target-nums[i]))
            {
                num1 = nums[i];
                break;
            }
        }
        for(int i= 0; i< size; i++)
        {
            if(copy[i] == num1)
                output.push_back(i);
            else if(copy[i] + num1 == target)
                output.push_back(i);
        }
        sort(output.begin(), output.end());
        return output;
        
    }
};