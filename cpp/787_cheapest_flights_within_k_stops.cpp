class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        std::unordered_map<int, vector<pair<int,int>> > mp;
        vector<int>visited(n,INT_MAX);
        visited[src]=0;
        for(const auto& flight : flights){
            mp[flight[0]].emplace_back(flight[1], flight[2]);
        }
        int count=0;
        queue<pair<int,int>>qu;
        qu.push({src,0});
        k++;  
        while(k--){
            int size=qu.size();
            while(size--){
                int curr_price=qu.front().second;
                for(auto& x:mp[qu.front().first]){
                    int new_price=x.second+curr_price;
                    if(new_price<visited[x.first]){
                        visited[x.first]=new_price;
                        qu.push({x.first,new_price});
                    }
                }
                qu.pop();
            }
            count++;
        }
        return (visited[dst]==INT_MAX)?-1:visited[dst];

        
    }
};