#include<bits/stdc++.h>
using namespace std;
int row,col;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool search(int i,int j, vector<vector<char>>&board,string word,unsigned int currIndex){
    if(currIndex>=word.size()){
        return true;
    }
    if(i < 0 || j < 0 || i>=row || j>=col || board[i][j]!=word[currIndex]){
        return false;
    }
    int t = board[i][j];
    board[i][j]='#';
    for(int k = 0;k<4;k++){
        if(search(i+dx[k],j+dy[k],board,word,currIndex+1)){
            return true;
        }
        
    }
    board[i][j]=t;
    return false;

}

bool exist(vector<vector<char>>& board, string word){
    row = board.size();
    col = board[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(search(i,j,board,word,0)){
                return true;
            }
        }
    }
    return false;
}

int main() 
{
     vector<vector<char>> board={{'T','E','A'},{'D','S','B'},{'E','T','C'}};
    string word = "TEA";
    if(exist(board,word))
        cout<< "true" ;
    else
        cout<< "false" ;
    return 0; 
}