class Solution {
public:
    int possibleStringCount(string word) {
        
        int n= word.size();
        int curr = 1;
        for(int i=0; i<n-1; i++)
        {
            if(word[i] == word[i+1])
                curr++;
        }
        return curr;
    }
};