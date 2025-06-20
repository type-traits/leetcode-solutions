class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::multimap<double, vector<int> > mp;
        for(const auto& cord : points){
            auto dist = std::sqrt(cord[0]*cord[0]+ cord[1]*cord[1]);
                mp.insert({dist, cord});
        }
        vector<vector<int>> res;
        for(const auto& pr : mp){
            if(k>0){
                res.push_back(pr.second);
                k--;
            }
        }
        
        return res;
    }
};