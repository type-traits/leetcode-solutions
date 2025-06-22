class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(const auto& account: accounts)
            maxWealth = std::max(maxWealth, std::accumulate(account.begin(), account.end(), 0)); 
        
        return maxWealth;        
    }
};