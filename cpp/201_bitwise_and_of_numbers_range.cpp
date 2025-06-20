class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shiftcount = 0;
      while(left != right and left > 0) {
          shiftcount++;
          left >>= 1; 
          right >>= 1;
    }
      return int64_t(left << shiftcount);
        
    }
};