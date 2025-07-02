class Solution {
public:
std::unordered_set<char> st = {'1','2','3','4','5','6','7','8','9','0'};
    bool isalphanum(char ch)
    {
        return (ch>='a' && ch<= 'z') ||
                (ch>='A' && ch<= 'Z') ||
                (st.find(ch) != st.end());

    }
    bool isPalindrome(string s) {
        if(s.empty())
            return true;
        string temp;
        for(char ch: s)
        {
            if(isalphanum(ch))
                temp.push_back(tolower(ch));
        }
        int i = 0;
        int j = temp.size()-1;
        while(i<=j)
        {
            if(temp[i] != temp[j])
                return false;
            i++;
            j--;
        }
        return true;
        
    }
};