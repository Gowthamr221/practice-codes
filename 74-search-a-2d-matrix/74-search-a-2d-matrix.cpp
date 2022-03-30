class Solution {

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){
            return false;
        }
        // if(matrix.size()==1&&matrix[0].size()==1){
        //     if(target==matrix[0][0]){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        
        int lessThan = 0;
        int low =0;
        int high = matrix.size()-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            if(matrix[mid][0]>=target){
                if(mid>0)
                lessThan = mid-1;
            }
            if(matrix[mid][0] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        int searchIndex = lessThan;
        low = 0;
        high = matrix[0].size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(matrix[searchIndex][mid]==target){
                return true;
            }
            if(matrix[searchIndex][mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
           low = 0;
        high = matrix[0].size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(matrix[matrix.size()-1][mid]==target){
                return true;
            }
            if(matrix[matrix.size()-1][mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};