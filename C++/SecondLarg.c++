#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr1[4]= {-2,-4,-3, -6};

    int n = sizeof(arr1)/sizeof(arr1[0]);

    sort(arr1, arr1 + n);


    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }

    cout<<"Second Largest Element is: "<<arr1[n-1]<<endl;

    return 0;


}
