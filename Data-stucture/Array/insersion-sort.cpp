#include <iostream>
using namespace std;

void insertionSortAscending(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void insertionSortDescending(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


void displayArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int asc[n], desc[n];

    for(int i = 0; i < n; i++)
    {
        asc[i] = arr[i];
        desc[i] = arr[i];
    }

    insertionSortAscending(asc, n);
    insertionSortDescending(desc, n);

    cout << "\nArray in Ascending Order: ";
    displayArray(asc, n);

    cout << "Array in Descending Order: ";
    displayArray(desc, n);

    return 0;
}
