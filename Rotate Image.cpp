//*** i. Transpose the Matrix
//*** ii. Reverse the row

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //Transpose
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){ //Just j<i (Becareful with this)
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //Now reverse every Row
        
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
