class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int i = 0;
        int count = 1;
        for(int j = i+1; j<nums.size(); )
        {
            if(nums[i]== nums[j])
            {
                if(count == 2)
                    nums.erase(nums.begin() + j);
                else
                {
                    count++;
                    i++;
                    j++;
                }
            }                
            else
            {
                count = 1;
                i++;
                j++;
            }
        }
        return nums.size();        
    }
};