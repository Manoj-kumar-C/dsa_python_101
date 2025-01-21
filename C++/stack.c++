#include <iostream>

using namespace std;
int stack[100], n=100, top=-1;


void push(int val){
    if(top>=n-1){
        cout<<"Stack Overflow"<<endl;
    }else{
        top++;
        stack[top]=val;
    }
}

void pop(){

    if(top<=-1){
        cout<<"Stack is UnderFlow"<<endl;
    }else{
        cout<<"The Popped Element is : "<<stack[top]<<endl;
        top--;
    }

}

void display(){

    if(top>=0){
        cout<<"Elements in the stack are: "<<endl;
        for(int i = top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"Stack is Empty"<<endl;
    }

}

void peek(){
    if(top>=0){
        cout<<"Top element is: "<<stack[top]<<endl;
    }else{
        cout<<"Stack is Empty"<<endl;
    }
}
int main(){

    int ch, val;

    cout<<"1. Push the Element"<<endl;
    cout<<"2. Pop the Element "<<endl;
    cout<<"3. To Show the Top element in the Stack"<<endl;
    cout<<"4. Display the elements in the stack"<<endl;
    cout<<"5. Exit"<<endl;

    do{
        cout<<"Enter the Choice: "<<endl;
        cin>>ch;

        switch(ch){
            case 1:{
                cout<<"Enter the elem to push: "<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:{
                cout<<"Pop the element: "<<endl;
                pop();
                break;
            }
            case 3:{
                cout<<"Top element is: "<<endl;
                peek();
                break;
            }
            case 4: {
                cout<<"Elements in the stack are : "<<endl;
                display();
                break;
            }
            case 5:{
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout<<"Invalid Choice"<<endl;
            }

        }
    }while(ch!=5);

    return 0;


}