class Solution {

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==0 || n==0){
            return false;
        }
        int low =0,high = m*n-1;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            int val = matrix[mid/n][mid%n];
            if(val==target){
                return true;
            }
            if(val<target){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};