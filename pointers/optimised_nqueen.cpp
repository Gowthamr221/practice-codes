#include<bits/stdc++.h>
#include<vector>
#include<string>
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

void recursiveSearch(int col,vector<string>&board,vector<vector<string>>&ans,int n){
	if(col==n){
		ans.push_back(board);
		return;
	}

	for(int row=0;row<n;row++){
		if(isSafe(col,row,board,n)){
			board[row][col]='Q';
			recursiveSearch(col+1,board,ans,n);
			board[row][col]='.';
		}
	}
}


int main(){
	int n = 4;
	vector<vector<string>> ans;
	string s(n,'.');
	vector<string>board(n);
	for (int i=0;i<n;i++){
		board[i]=s;
	}
	recursiveSearch(0,board,ans,n);
	for(auto it : ans){
        for (auto it2:it){
            cout << it2 << endl;
        }

        cout << endl;
        cout << endl;
    }
}