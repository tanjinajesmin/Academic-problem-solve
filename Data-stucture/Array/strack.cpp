#include <iostream>
#define MAX 5
using namespace std;

int stack[MAX];
int top = -1;

bool isFull()
{
    return (top == MAX - 1);
}

bool isEmpty()
{
    return (top == -1);
}

void push(int value)
{
    if(isFull())
    {
        cout << "Stack Overflow!" << endl;
        return;
    }

    stack[++top] = value;
}

void pop()
{
    if(isEmpty())
    {
        cout << "Stack Underflow!" << endl;
        return;
    }

    cout << "Popped Element: " << stack[top] << endl;
    top--;
}

void peek()
{
    if(isEmpty())
    {
        cout << "Stack is Empty!" << endl;
        return;
    }

    cout << "Top Element: " << stack[top] << endl;
}

void display()
{
    if(isEmpty())
    {
        cout << "Stack is Empty!" << endl;
        return;
    }

    for(int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. isFull" << endl;
        cout << "5. isEmpty" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                if(isFull())
                    cout << "Stack is Full" << endl;
                else
                    cout << "Stack is Not Full" << endl;
                break;

            case 5:
                if(isEmpty())
                    cout << "Stack is Empty" << endl;
                else
                    cout << "Stack is Not Empty" << endl;
                break;

            case 6:
                display();
                break;

            case 7:
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while(choice != 7);

    return 0;
}
