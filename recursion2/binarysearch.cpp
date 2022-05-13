#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int value){
    if(r>=l){
        int mid = l+(r-l)/2;
        // returning the index of matching element
        if(arr[mid]==value){
            return mid;
        }
        if(value > arr[mid]){
            // we should return the result because when it comes out of recursion it will return -1; 
            // instead we end the method by returning the smaller function
            return binarySearch(arr,mid+1,r,value);
        }
        if(value < arr[mid]){
            return binarySearch(arr,l,mid-1,value);
        }
    }
    return -1;
}

int main(){
 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int arr[] = { 2, 3, 4, 5, 6, 8  };
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int solution = binarySearch(arr,0,n,x);
    cout << solution << endl;
 return 0;
}

