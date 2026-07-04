#include <iostream>
#define n 5

using namespace std;

int queue[n];
int front = -1;
int rear = -1;

void enqueue()
{
    int x;
    cout << "Enter value: ";
    cin >> x;

    if ((rear + 1) % n == front)
    {
        cout << "Queue Overflow\n";
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % n;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        int data = queue[front];

        if (front == rear)
        {
            cout << "Deleted: " << data << endl;
            front = rear = -1;
        }
        else
        {
            cout << "Deleted: " << data << endl;
            front = (front + 1) % n;
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        cout << "Front Element: " << queue[front] << endl;
    }
}

void isFull()
{
    if ((rear + 1) % n == front)
        cout << "Queue is Full\n";
    else
        cout << "Queue is not Full\n";
}

void isEmpty()
{
    if (front == -1 && rear == -1)
        cout << "Queue is Empty\n";
    else
        cout << "Queue is not Empty\n";
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Empty Queue\n";
        return;
    }

    int i = front;

    cout << "Queue: ";

    while (i != rear)
    {
        cout << queue[i] << " ";
        i = (i + 1) % n;
    }

    cout << queue[rear] << endl;
}

int main()
{
    int choice;

    while (1)
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. isFull";
        cout << "\n5. isEmpty";
        cout << "\n6. Display";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            isFull();
            break;

        case 5:
            isEmpty();
            break;

        case 6:
            display();
            break;

        case 7:
            return 0;

        default:
            cout << "Wrong Input\n";
        }
    }

    return 0;
}
