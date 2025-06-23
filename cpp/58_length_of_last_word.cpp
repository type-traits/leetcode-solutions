class Solution {
public:
    int lengthOfLastWord(string s) {
        string last;
        string temp;
        for(const auto ch : s)
        {
            if(ch == ' ')
            {
                if(!temp.empty())
                    last = std::move(temp);
            }
            else
                temp += ch;
        }
        if(!temp.empty())
            last = std::move(temp);
        return last.size();
    }
};