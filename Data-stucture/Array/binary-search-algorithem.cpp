//7. Write a program in C++ to search any element from an array (given by the user) using binary search algorithm. Create a user defined function for implementing binary search.
#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch (int n,int a[],int value)
{
    int left = 0,right =n -1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid]==value){
            return mid;
        }
        else if(a[mid]<value){
            left = mid + 1;
        }
        else{
            right = mid -1;
        }
    }
    return - 1;
}
int main()
{
    int i,n,value;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    cout << "Array element : ";
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        cout << "Enter the value you want to search  : ";
        cin >> value;
        int index = binarysearch(n,a,value);
        if(index != -1){
            cout << "Found at position " << index + 1;
        }
        else{
            cout << "Not found";
        }
        return 0;
}
