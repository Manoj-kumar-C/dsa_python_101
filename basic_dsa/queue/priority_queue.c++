#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={60,20,40,70,30,10};
    priority_queue<int> pq;

    for(int i=0; i<6;i++){
        pq.push(arr[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}