class Solution {
public:
    bool isPalindrome(int x) {
        string origin = to_string(x);
        auto rev = origin;
        reverse(rev.begin(), rev.end());
        if(rev == origin)
            return true;
        else return false;
        
    }
};