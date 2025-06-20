class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        sort(deck.begin(),deck.end()); //sort the array
        for(int i = deck.size()-1;i>=0;i--){
            if(!q.empty()){ 
                q.push(q.front()); // push the top element
                q.pop(); // pop the element
            }
            q.push(deck[i]); // then push new element
        }
        for(int i = deck.size()-1;i>=0;i--){
            deck[i] = q.front(); 
            q.pop();
        }
        return deck;
    }
};