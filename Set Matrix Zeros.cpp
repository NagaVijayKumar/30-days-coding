class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>zeros;
        int m=matrix.size();
        int n = matrix[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    zeros.push_back({i,j});
                }
            }
        }
        
        int sz = zeros.size();
        for(int i=0; i<sz; i++){
            int r = zeros[i].first;
            int c = zeros[i].second;
            
            for(int j=0; j<matrix[0].size(); j++){
                matrix[r][j]=0;
            }
            for(int j=0; j<matrix.size(); j++){
                matrix[j][c]=0;
            }
        }
    }
};
