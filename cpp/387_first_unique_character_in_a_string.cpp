class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> count;
        for(const char ch : s){
            count[ch]++;
        }
        int index = 0;
        for(const char ch : s){
            if(count[ch] == 1) return index;
            index++;
        }
        return -1;
        
    }
};