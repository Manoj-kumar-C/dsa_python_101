#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Key Parameters to remember in the Binary Search -- 
// Only Works in the Sorted Array, Params--> Arr1, low, high, x --> To find the Element

void binarySearch(int arr[],int low,int high,int targ){
    bool result =false;

    while(low<=high){

        int mid = low + (high -low)/2;

        if(arr[mid] == targ){
            cout<<"Element Found at the Index: "<<mid<<endl;
            result = true;
            break;
        }

        if(arr[mid]<targ){
            low = mid +1;
        }

        if(arr[mid]>targ){
            high = mid -1;
        }
    }


    if(result==false){
        cout<<"Element Not Found";
    }
}

int main(){
    int arr1[5]={1,2,4,5,7};

    int n = sizeof(arr1)/sizeof(arr1[0]);

    int target =5;
    binarySearch(arr1, 0, n-1, target);
    return 0;
}