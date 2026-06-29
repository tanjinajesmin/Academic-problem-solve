#include<iostream>
#define SIZE 5
using namespace std;
int queue[SIZE];
int front = -1,rear = -1;

void enqueue(int value)
{
    if(rear == SIZE - 1){
        cout << "Queue overflow"<<endl;

    }
    else{
        if(front == -1)
            front = 0;
        rear++;
        queue[rear]=value;
        cout << value <<"inserted into queue"<<endl;
    }
}
void dequeue()
{
    if(front == -1 ||front > rear){
        cout << "Queue Underflow"<<endl;
    }
    else{
        cout<<queue[front]<< "deleted from queue"<<endl;
        front ++;
        if(front > rear)
            front = rear = -1;
    }
}
void display()
{
    if(front == -1)
    {
        cout<< "Queue is Empty"<<endl;
    }
    else{
        cout << "Queue elements: ";
        for(int i = front ;i<=rear;i++){
            cout << queue[i]<< " ";
        }
        cout<<endl;
    }

}
void peek()
{
    if(front == -1){
        cout << "Queue is Empty"<<endl;
    }
    else{
        cout << "Front element = " << queue[front]<<endl;
    }

}
void isFull()
{
    if(rear == SIZE - 1){
        cout << "Queue is Full"<<endl;
    }
    else{
        cout << "Queue is Not Full"<<endl;
    }
}
void isEmpty()
{
    if(front == -1){
        cout<< "Queue is Empty"<<endl;
    }
    else{
        cout<< "Queue is Not Empty"<<endl;
    }
}
int main()
{
    int choice ,value;
    do{
       cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. isFull\n";
        cout << "6. isEmpty\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
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
            cout << "Program End\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 0);

    return 0;
}


