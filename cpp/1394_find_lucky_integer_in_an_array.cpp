class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for(const int num: arr)
            mp[num]++;
        auto start = mp.rbegin();
        while(start != mp.rend())
        {
            if(start->first == start->second)
                return start->first;
            start++;
        }
        return -1;
    }
};