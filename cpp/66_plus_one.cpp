class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> output;
        int carry = 1;
        for(auto it = digits.rbegin(); it != digits.rend(); it++)
        {
            int sum = *it + carry;
            if(sum > 9)
            {
                carry = 1;
                *it = sum%10;
            }
            else
            {
                carry = 0;
                *it = sum;
                break;
            }
        }
        if(carry)
            output.push_back(1);
        
        output.insert(output.end(),
                std::make_move_iterator(digits.begin()),
                std::make_move_iterator(digits.end()));
        
        return output;
    }
};