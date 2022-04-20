#include<string>
#include<iostream>
using namespace std;

class student
{
   private:
   string name;
   public:
   int rollNo;
   
   void setStr(string name){
       this->name = name;
   }
   
   void getStr(){
       cout << this->name << endl;
   }

};

