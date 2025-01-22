#include<iostream>
#include<algorithm>
using namespace std;
#include<bits/stdc++.h>

// Push, Pop, Top, Print ---> LIFO, FILO
int n, top = -1 ;
vector<int> arr;
void push(int x){
    if(top == n-1){
        cout<<"Stack is Overflow"<<endl;
    }else{
        top++;
        arr[top]=x;
    }
}

void pop(){
    if(top < 0){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Element Popped is: "<<arr[top]<<endl;
        top--;
    }
}

void showtop(){
    if(top <0){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Top Element is: "<<arr[top]<<endl;
    }
}

void print(){
    for(int i=top; i>-1; i--){
        cout<<arr[i]<<" ";
    }
}
int main(){

    cout<<"Enter the Capacity of the Stack: ";
    cin>>n;
    arr.resize(n);
    push(10);
    push(20);
    print();

    return 0;
}