class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    unordered_map<string, vector<string> > uniqueAnag;
    // vector<string>  ip{"eat","tea","tan","ate","nat","bat"};
    for(const auto& str: strs)
    {
        string key(str.begin(), str.end());
        sort(key.begin(), key.end());
        uniqueAnag[key].push_back(str);
    }
    vector<vector<string>> op;
        for(const auto& pr: uniqueAnag )
        {
            // vector<string> sec{pr.second.begin(), pr.second.end()};
            op.push_back(pr.second);
        }
        return op;
        
    }
};