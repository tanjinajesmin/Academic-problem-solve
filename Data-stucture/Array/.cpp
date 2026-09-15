#include<iostream>
#define MAX 5;
using namespace std;

int stack [MAX];
int top = -1;
bool isFull()
{
    return (top ==MAX-1);
}
bool isEmpty()
{
    return(top==-1);
}

void push(int value)
{
    if(isFull()){
        cout << "Stack is overflow"<<endl;
        return ;
    }
    stack[++top]=value;
}
void pop()
{
    if(isEmpty()){
        cout << "Stack is underflow"<<endl;
        return;
    }
    cout << "Popped element: "<<stack[top]<<endl;
    top--;
}
void peek()
{
    if(isEmpty()){
        cout << "Stack is Empty"<<endl;
        return ;
    }
    cout << "Top Element : "<< stack[top] << endl;
}

void display()
{
    if(isEmpty()){
        cout << "stack is empty "<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout <<stack[i]<< " ";
    }
    cout << endl;
}
