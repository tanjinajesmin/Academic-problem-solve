#include<iostream>
using namespace std;

void insertionAscending(int a[], int n)
{
    for(int i = 1;i<n ;i++){
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
void insertionDesecending(int a[],int n)
{
    for(int i=1;i<n;i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j]<key){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= key;
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the array Size : ";
    cin >> n;
    int a[n], a2[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        a2[i] = a[i];
    }

    insertionAscending(a,n);
    cout<< "Ascending order : ";
    display(a,n);

    insertionDesecending(a2,n);
    cout << "Descending order : ";
    display(a2,n);

    return 0;

}
