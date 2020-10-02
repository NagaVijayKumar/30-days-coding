//***To Find ele in pascal's triangle at i,j location is iCj(nCr)***

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal(numRows);
        
        for(int i=0; i<numRows; i++){
            pascal[i].resize(i+1); // Because in i th row i elements are present
            pascal[i][0]=1; pascal[i][i]=1; //Firse ele and Last is 1
            
            for(int j=1; j<i; j++){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]; 
            }
        }
        
        return pascal;
        
    }
};
