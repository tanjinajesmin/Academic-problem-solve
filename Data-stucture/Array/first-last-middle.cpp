#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Array size : ";
    cin >> n;
    int a[n + 1];
    cout<<"Enter array element : ";
    for(int i= 0;i < n;i++){
        cin >> a[i];
    }
    int pos ,value;
    while(true){
        cout<< "Enter the position and value you want to insert : ";
    cin >> pos >> value;
    if(pos<0 || pos>n){
        cout<< "Invalid position ! try again."<<endl;
    }
    else{
        break;
    }
    }
    for(int i = n-1; i>0;i--){
        a[i+1]=a[i];
    }
    a[pos]=value;
    cout<<"After insertion : ";
    for(int i =0;i<n+1;i++){
        cout<< a[i] <<" ";
    }
    return 0;
}
