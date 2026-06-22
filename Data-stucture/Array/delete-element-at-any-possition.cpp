// Write a program in C++ to delete an element at any position of the array given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n,i,position;
    cout << "Enter the array size : ";
    cin >> n;
    int a[n];
    cout << "Enter the array element : ";
    for(int i =0; i< n;i++){
        cin >> a[i];
    }
    while(1){
        cout << "Enter the position (0 indexed),from 0 to" << n-1 << " : ";
        cin >> position;
        if(position <0 || position >= n){
            cout << "Invalid position ! please try again." << endl;
        }
        else{
            break;
        }
    }
        for(int i = position ;i < n-1;i++){
            a[i] = a[i + 1];
        }
        cout << "After deletion : ";
        for(int i = 0;i <n-1;i++){
            cout << a[i] << " " ;
        }

        return 0;
}
