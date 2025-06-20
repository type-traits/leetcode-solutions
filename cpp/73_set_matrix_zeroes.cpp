class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        if(n == 0) return;
        int m = matrix[0].size();
        unordered_set<int> rows, cols;
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == 0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        
        for(int num : rows){
            for(int j = 0; j<m; j++){
                matrix[num][j] = 0;
            }
        }
        for(int num : cols){
            for(int i = 0; i<n; i++){
                matrix[i][num] = 0;
            }
        }

    }
};