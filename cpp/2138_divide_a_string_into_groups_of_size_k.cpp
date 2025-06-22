class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> output;
        if(s.empty())
            return output;        
        string temp;
        int len = 0;
        for(const auto& ch : s)
        {
            temp += ch;
            len++;
            if(len == k)
            {
                output.emplace_back(temp);
                temp.clear();
            }
            len %= k;
        }
        if(!temp.empty())
        {
            int remaining = k - temp.size();
            while (remaining--)
                temp += fill;
            output.emplace_back(temp);
            temp.clear();
        }
        return output;        
    }
};