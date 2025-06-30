class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> out;
        for(int i=1; i<=n;i++)
        {
            if(i%3 == 0 && i%5 == 0)
                out.emplace_back("FizzBuzz");
            else if(i%3 == 0)
                out.emplace_back("Fizz");
            else if(i%5 == 0)
                out.emplace_back("Buzz");
            else
                out.emplace_back(std::to_string(i));
        }
        return out;        
    }
};