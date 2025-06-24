class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty())
            return 0;
        sort(std::begin(citations), std::end(citations));
        int n = citations.size();
        int result = 0;
        for(int i = n-1; i >= 0; i--)
        {
            if(citations[i] >= n-i)
                result++;
        }
        return result;   
    }
};