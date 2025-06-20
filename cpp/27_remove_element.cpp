class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        nums.erase(
    std::remove_if(nums.begin(), nums.end(),
        [val](const int & i) { return i == val; }),
    nums.end());
        return nums.size();
        
    }
};