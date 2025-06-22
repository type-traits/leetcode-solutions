class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int,greater<int>> st(nums.begin(), nums.end());
        for(const auto& num : st)
        {
            if(st.find(-1*num)!=st.end()){
                return num;
            }
        }
        return -1;

        
    }
};