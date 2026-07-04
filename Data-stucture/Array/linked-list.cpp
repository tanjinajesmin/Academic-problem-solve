#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    Node *head = NULL, *newNode,*temp;
    int input = 1;
    cout<< "---Create a Linked list---"<<endl;
    while(input){
        newNode = new Node;
        cout << "Enter data : ";
        cin>>newNode->data;
        newNode->next= NULL;
        if(head == NULL){
            head = temp = newNode;
        }
        else{
            temp->next= newNode;
            temp = newNode;
        }
        cout << "To continue creating node press 1,else press 0: ";
        cin >> input;
    }
    cout<< "\n---Displaying Linked List Data---"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<< " ->";
        temp = temp -> next;
    }
    cout<< "NULL"<<endl;
    return 0;
}
