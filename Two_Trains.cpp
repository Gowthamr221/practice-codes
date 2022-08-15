#include<iostream>
#include<vector>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long int noOfStations;
        cin >> noOfStations;
        noOfStations-=1;
        long int sumofduration=0;
        int temp=0;
        int maxDelay=0;
        while (noOfStations--)
        {
            cin >> temp;
            sumofduration+=temp;
            maxDelay=max(maxDelay,temp);
        }
        cout << sumofduration+maxDelay << endl;
         
    }
    
}