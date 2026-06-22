// Write a program in C++ to delete an element at the end of the array given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter the array size : ";
    cin >> n;
    int a[n];
    cout << "Enter the array element : ";
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    n--;
    cout << "After end deletion : ";
    for(int i =0;i < n; i++){
      cout << a[i] << " ";
    }
    return 0;
}
