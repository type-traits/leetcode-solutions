class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        // n=n*2;
        while(n != 0)
        {
            if(n & 1) result++;
            n = n/2;
        }
        return result;
        
    }
};