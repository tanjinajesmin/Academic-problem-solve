#include<iostream>
#define SIZE 5
using namespace std;
int queue [SIZE];
int front = -1,rear = -1;
void enqueue(int value)
{
    if(rear = SIZE -1){
        cout << "Queue overflow "<< endl;
    }
    else{
        if(front == -1)
            front = 0;
            rear++;
            queue[rear]=value;
            cout<< value << "Inserted into queue"<<endl;
    }
}
void dequeue()
{
    if(front == -1|| front > rear){
        cout << "Queue underflow"<<endl;
    }
    else{
        cout << queue[rear]<<"deleted from queue"<<endl;
        front ++;
        if(front>rear)
            front = rear = -1;
    }

}
void display()
{
    if(front == -1){
        cout<<"queue is empty"<< endl;
    }
    else{
        cout << "Queue elements :";
        for(int i = 0 ;i<=rear;i++){
            cout << queue[i]<< " ";
        }
      cout << endl;
    }
}
void peek()
{
    if(front == -1){
        cout<< "queue is Empty "<<endl;
    }
    else{
        cout << "Front Elements : "<<queue[front]<< endl;
    }
}
void isFull()
{
    if(SIZE == rear-1){
        cout << "Queue is Full"<< endl;
    }
    else {
        cout << "Queue is not full"<<endl;
    }
}
void isEmpty()
{
    if(front == -1){
        cout << "Queue is Empty"<< endl;
    }
    else {
        cout << "Queue is not Empty"<<endl;
    }
}
int main()
{
    int choice ,value;
    do{
        cout << "\n1.enqueue.\n"<< "2.dequeue.\n"<< "3.display.\n"<< "4.peek.\n"<< "5.isFull.\n"<< "6.isEmpty.\n";
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Enter value";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            isFull();
            break;
        case 6:
            isEmpty();
            break;
        case 0:
            cout << "Program end.\n";
        default:
            cout << "Invalid choice.\n";

        }
    }
    while(choice != 0);
    cout << "Default Choice.\n";
    return 0;
}
