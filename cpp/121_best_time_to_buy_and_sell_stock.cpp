class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int ans = 0;
        for(auto price:prices)
        {
            if(price<min)
            {
                min=price;
            }
            else if(price - min > ans)
            {
                ans = price - min;
            }
        }
      return ans;  
        
    }
};