#include<iostream>
using namespace std;
void selectionAscending(int arr[],int n)
{
    for(int i =0;i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] <arr[minIndex])
                minIndex = j;
        }

        swap(arr[i],arr[minIndex]);

    }

}
void selectionDescending(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        int maxIndex = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]>arr[maxIndex])
                maxIndex = j;
        }
        swap(arr[i],arr[maxIndex]);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout<< "Enter array size : ";
    cin >> n;
    int arr[n],arr2[n];
    cout << "Enter array elements : ";
    for(int i =0;i<n;i++){
        cin >> arr[i];
        arr2[i]=arr[i];
    }
    selectionAscending(arr,n);
    cout << "Ascending order : ";
    display(arr,n);

    selectionDescending(arr2,n);
    cout << "Descending order : ";
    display(arr2,n);

    return 0;
}
