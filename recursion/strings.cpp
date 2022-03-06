#include<iostream>
using namespace std;

int main(){
 string s = "abc";
 cout << s << endl;
 string s1;
 cout << s1 << endl;
 string *p = new string;
 *p = "hello";
 cout << p << *p << endl;
 getline(cin,s);
 cout << s;
 cout << s.size();
 // substr(from the index , count from index to next n characters)
 cout << s.substr(3);
 cout << s.find("world") << endl;
 return 0;
}

