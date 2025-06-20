class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // set<char> u{'{','[','('};
        
        for(const auto& ch : s)
        {
            if(ch == '{' or ch == '[' or ch =='(')
                st.push(ch);
            else 
            {
                if(ch == ')' and ( st.empty() or st.top() != '('))
                    return false;
                else if(ch == '}' and ( st.empty() or st.top() != '{'))
                    return false;
                else if(ch == ']' and ( st.empty() or st.top() != '['))
                    return false;
                else
                    st.pop();
                    
            }
        }
        if(st.empty()) return true;
        else return false;
        
    }
};