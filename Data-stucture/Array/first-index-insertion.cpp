#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int a[n +1];
    cout << "Enter array element : ";
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    cout<< "Enter the value you want to insert : ";
    int value;
    cin>> value;
    for(int i = n-1;i>=0;i--){
        a[i+1] = a[i];
    }
    a[0]= value;
    cout << "After insertion : ";
    for(int i = 0;i<n+1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
