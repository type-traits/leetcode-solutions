class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return (std::ceil(std::log2(n)) == std::floor(std::log2(n)));
        
    }
};