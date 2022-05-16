class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         if(grid[0][0]==1){
//             return -1;
//         }
//         queue<pair<int,pair<int,int>>> storage;
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<pair<int,int>>dir = {{1,1},{1,-1},{-1,1},{-1,-1},{0,1},{1,0},{0,-1},{-1,0}};
//         storage.push({0,{0,0}});
//         grid[0][0]=1;
//         while(!storage.empty()){
//             int size = storage.size();
//             while(size--){
//                 auto node = storage.front();
//                 storage.pop();
//                 auto point = node.second;
//                 if(point.first==m-1 && point.second==n-1 ){
//                     return node.first+1;
//                 }
//                 for(auto it : dir){
//                     int r = point.first + it.first;
//                     int c = point.second + it.second;
//                     if(r>=0 && c>=0 && r<m && c<n && grid[r][c]==0){
//                         storage.push({node.first+1,{r,c}});
                        
//                         grid[r][c]=1;
//                     }
//                 }
            
//             }
            
//         }
//         return -1;
        if(grid[0][0]==1){
            return -1;
        }
        
        queue<pair<pair<int,int>,int>> todo;
        grid[0][0]=1;
        todo.push({{0,0},0});
        int m = grid.size();
        int n = grid[0].size();
        vector<pair<int,int>>dir = {{1,1},{0,1},{1,0},{1,-1},{-1,1},{0,-1},{-1,0},{-1,-1}};
        while(!todo.empty()){
            int size = todo.size();
            while(size--){
            auto currNode = todo.front();
            todo.pop();
            auto points = currNode.first;
            auto value = currNode.second;
            if(points.first == m-1 && points.second == n-1){
                return value+1;
            }
            for(auto it : dir){
                int r = points.first + it.first;
                int c = points.second + it.second;
                if(r>=0 && c>=0 && r<m && c<n && grid[r][c]==0){
                    grid[r][c]=1;
                    todo.push({{r,c},value+1});
                }
            }    
            }
            
        }
        return -1;
        
    }
};