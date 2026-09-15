#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%d deleted from queue\n", queue[front]);
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Front element = %d\n", queue[front]);
    }
}

void isFull() {
    if (rear == SIZE - 1)
        printf("Queue is Full\n");
    else
        printf("Queue is Not Full\n");
}

void isEmpty() {
    if (front == -1)
        printf("Queue is Empty\n");
    else
        printf("Queue is Not Empty\n");
}

int main() {
    int choice, value;

    do {
        printf("\n1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.isFull\n");
        printf("6.isEmpty\n");
        printf("0.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
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
                printf("Program End\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 0);

    return 0;
}
