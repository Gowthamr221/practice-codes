#include<bits/stdc++.h>

using namespace std;

void swap(int*p,int*q){
    int *temp = new int;
    *temp = *p;
    *p = *q;
    *q = *temp;
    delete temp;
}

int partition(vector <int> &arr ,int left ,int right){
    int pivot = arr[right];
    int i = left - 1;
    for(int j = i ;j<=right - 1 ;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[right]);
    return i+1;
}

void quickSortHelper(vector<int>&arr ,int left ,int right){
    if(left >= right) return;
    else{
        int p = partition(arr,left,right);
        quickSortHelper(arr,left,p-1);
        quickSortHelper(arr,p+1,right);
    }
}

void quickSort(vector<int>&arr,int size){
    quickSortHelper(arr,0,arr.size()-1);
}
int main(){

    vector<int>arr={-1,9,3,5,6};
    quickSort(arr,arr.size()-1);
    cout << "sorted array is" << endl;
    for(auto it : arr){
        cout << it << " ";
    }
}
