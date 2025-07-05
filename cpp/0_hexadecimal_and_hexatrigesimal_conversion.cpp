class Solution {
public:
    string toHex(long long decimal) {
        if (decimal == 0) return "0";
    
        string hexDigits = "0123456789ABCDEF";
        string hex = "";
    
        while (decimal) {
            int remainder = decimal % 16;
            hex = hexDigits[remainder] + hex;
            decimal /= 16;
        }    
        return hex;
    }
    
    string toBase36(long long decimal) {
        if (decimal == 0) return "0";
    
        string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result = "";
    
        while (decimal > 0) {
            int remainder = decimal % 36;
            result = digits[remainder] + result;
            decimal /= 36;
        }
        return result;
    }
    
    string concatHex36(int n) {
        string out = toHex(n*n) + toBase36(n*n*n);
        return out;
        
        
    }
};