#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linearSearch(int a[], int n1, int targ){

    bool result =false;
    for(int i=0; i<n1; i++){
        if(a[i] == targ){
            cout<<"The Element is Found at the index: "<<i;
            result =true;
        }
    }

    if(result == false){
        cout<<"Element not Found";
    }
}

int main(){
    int arr1[5]={1,2,4,5,7};

    int n = sizeof(arr1)/sizeof(arr1[0]);

    int target =5;

    linearSearch(arr1,n,target);

    return 0;
}