#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Important Functions Enqueue, Dequeue, Display, Peek, Var Names --> front, rear, n
vector<int> arr;
int n, front =-1, rear = -1;;
void enqueue(){
    int val;
    if(rear == n-1){
        cout<<"Queue is Overflow"<<endl;

    }else{
        if(front == -1){
            front =0;
        }
        cout<<"Enter Val: ";
        cin>>val;
        rear++;
        arr[rear]= val;
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        cout<<"Queue is UnderFlow"<<endl;
    }else{
        cout<<"Element Dropped is: "<<arr[front]<<endl;
        front++;
    }
}

void display(){
    cout<<"The Elements are :";
    for(int i=front; i<=rear; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"Enter the size: ";
    cin>>n;
    arr.resize(n);
    int ch;

    
do{
    cout<<"Choice: ";
    cin>>ch;
    switch(ch){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout<<"Invalid Choice"<<endl;
    }
}while(ch!=4);

    return 0;
}

// Big O Notation --> Worst Case, Upper Bound

// Big Omega Notation --> Best Case, Lower Bound

// Big Theta Notation --> Average Case , Both Upper and Lower Bound


