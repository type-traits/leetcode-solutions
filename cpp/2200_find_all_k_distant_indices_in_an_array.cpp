class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> keyIndices;
        vector<int> output;
        int i =0, j= nums.size()-1;
        while(i<=j)
        {
            if(nums[i] == key)
                keyIndices.insert(i);
            if(nums[j] == key)
                keyIndices.insert(j);
            i++;
            j--;
        }
        for(i=0; i< nums.size(); i++)
        {
            for(int index: keyIndices)
            {
                if(std::abs(i-index)<=k){
                    output.push_back(i);
                    break;
                }
            }
        }
        return output;        
    }
};