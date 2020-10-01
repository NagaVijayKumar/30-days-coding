class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        int n = intervals.size();
        if(intervals.size()==0){
            return res;
        }
       
sort(intervals.begin(),intervals.end(),[](vector<int>arr1,vector<int>arr2){	return arr1[0]<arr2[0];});        
        vector<int>temp;
        temp.push_back(intervals[0][0]); temp.push_back(intervals[0][1]);
        for(int i=1; i<n; i++){
            if(temp[1]>=intervals[i][0]){
                temp[1]= max(temp[1],intervals[i][1]);
            }else{
                res.push_back(temp);
                
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            }
        }
        res.push_back(temp);
        return res;
    }
    
};
