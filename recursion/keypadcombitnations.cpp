#include <bits/stdc++.h>
using namespace std;
unordered_map <int,string> keypadCodes;
	keypadCodes[1] = " ";
	keypadCodes[2] = "abc";
	keypadCodes[3] = "def";
	keypadCodes[4] = "ghi";
	keypadCodes[5] = "jkl";
	keypadCodes[6] = "mno";
	keypadCodes[7] = "pqrs";
	keypadCodes[8] = "tuv";
	keypadCodes[9] = "wxyz";
	keypadCodes[0] = " ";
vector<string> keypad(int n){
	if(n == 0){
		vector<string> output;
		output.push_back("");
		return output;
	}

	string remainingPart = (n/10)+'0';
	int lastDigit = n%10;
	int smallOuput = keypad(remainingPart);
	vector<string>output;
	for(auto s : smallOuput){
		for(int k : keypadCodes[lastDigit]){
			
			string option = s + k;
			output.push_back(option);
		}
	}
	return output;
}


int main(){
	
	vector<string>solution = keypad(23);
}