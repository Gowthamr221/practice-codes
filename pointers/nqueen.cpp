// N queen problem solution

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int col,int row,vector<string>&board,int n){
	int dupcol = col;
	int duprow = row;

	// check topleft diagonal
	while(col>=0 && row>=0){
		if(board[row][col]=='Q'){
			return false;
		}
		row--;
		col--;
	}
	col= dupcol;
	row=duprow;
	//check left row
	while(col>=0){
		if(board[row][col]=='Q'){
			return false;
		}
		col--;
	}
	col= dupcol;
	row=duprow;

	//check bottom left diagonal
	while(col>=0 && row<n){
		if(board[row][col]=='Q'){
			return false;
		}
		row++;
		col--;
	}
	return true;
}

void Solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
	// base case where col <= n-1 but if it exceeds means we got the required solution
	if(col==n){
		ans.push_back(board);
		return;
	}
	for(int row=0;row<n;row++){
		if(isSafe(row,col,board,n)){
			board[row][col]='Q';
			Solve(col+1,board,ans,n);
			board[row][col]='.';
		}
	}
}


int main(){
	vector<vector<string>>ans;
	int n = 4;
	vector<string>board(n);
	string s(n,'.');
	for(int i=0;i<n;i++){
		board[i]=s;
	}

	Solve(0,board,ans,n);
	  for(auto it : ans){
        for (auto it2:it){
            cout << it2 << endl;
        }

        cout << endl;
        cout << endl;
    }
	
	return 0;
}