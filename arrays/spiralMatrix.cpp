#include<iostream>
#include<vector>
using namespace std;
vector<int>spiralOrder(vector<vector<int>>&matrix){
    vector<int>ans;
    if(matrix.size()==0){
        return ans;
    }
    int ROW = matrix.size();
    int COL = matrix[0].size();
    vector<vector<bool>> seen(ROW, vector<bool>(COL, false)); 
    
    

   

}
int main(){
    vector<vector<int>> arr{{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16}};


}