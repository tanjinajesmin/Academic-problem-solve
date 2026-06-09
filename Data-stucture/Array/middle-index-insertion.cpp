//.Write a program in c++ to insert an element at any position of the array given by the user.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n + 1];
    cout << "Array Elements : ";
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the value you want to insert : ";
    int value ;
    cin >> value;
    int p;
    do{
        cout << "Enter position : ";
        cin >> p;
        if(p<0 || p>n){
            cout << "invalid position !"<< endl;
        }
    }
    while(p<0 || p>n);
    for(int i = n-1; i>=p-1;i--){
        arr[i+1] = arr[i];
    }
    arr[p-1]=value;
    cout << "After insertion : ";
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}
