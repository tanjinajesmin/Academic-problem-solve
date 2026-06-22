//2. Write a program in C++ to delete an element at the beginning of the array given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    cout << "Enter array elements : ";
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    for(int i =0; i < n-1; i++){
        a[i] = a[i + 1];
    }
    cout << "After beginning deletion : ";
    for(int i =0;i < n-1;i++){
        cout << a[i] << " ";
    }
    return 0;
}
