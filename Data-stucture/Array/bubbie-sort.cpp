#include <iostream>
using namespace std;
void bubbleAscending(int arr[],int n)
{
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void bubbleDescending(int arr[],int n)
{
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[],int n)
{
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n],arr2[n];
    cout << "Enter elements : ";
    for(int i =0;i<n;i++){
        cin >> arr[i];
        arr2[i]=arr[i];
    }
    bubbleAscending(arr,n);
    cout << "Ascending Order : ";
    display(arr,n);

    bubbleDescending(arr2,n);
    cout << "Descending order: ";
    display(arr2,n);

    return 0;

}
