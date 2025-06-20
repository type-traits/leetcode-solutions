class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1 && trust.empty()) return 1;
        if(trust.empty()) return -1;


        auto sum = (n*n + n)/2;
        // for(const auto)
        int res = -1;
        // if(std::any_of(trust.begin(), trust.end(), [&res](const auto& pair){return res!=pair[1];})){
        //     res = -1;
        // }
        // return res;
        
        
        std::unordered_map<int, unordered_set<int>> hash;
        for(const auto& pr : trust){
            if(hash[pr[0]].empty()) sum -= pr[0];
            hash[pr[0]].emplace(pr[1]);
        }

        if(sum){
            if(std::all_of(hash.begin(), hash.end(), [&sum](const auto & pr){
                return pr.second.find(sum) != pr.second.end();
                })){
                    res = sum;
            }
            
        }
        return res;    
    }
};