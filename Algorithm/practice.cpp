#include<iostream>
using namespace std;
struct Item
{
    int weight;
    int profit;
    double Ratio;
    char name;

};
int main()
{
    int n;
    cout << "Enter the Number of Item : ";
    cin >> n;
    Item item[n];
    for(int i=0;i<n;i++){
        cout << "Enter the Item name " << i+1 << " : ";
        cin >> item[i].name;
        cout << "Enter the Weight " << i+1 << " : ";
        cin >> item[i].weight;
        cout << "Enter the profit " << i+1 << " : ";
        cin >> item[i].profit;
        item[i].Ratio = (double)item[i].profit/item[i].weight;
    }
    int capacity;
    cout << "Enter the Knapsack capacity : ";
    cin >> capacity;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(item[i].Ratio <item[i].Ratio){
                Item temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }
    cout << " Sorted Items : "<<endl;

    for(int i=0;i<n;i++){
        cout << "Item : "<<item[i].name
        << " weight : "<<item[i].weight;
        << " profit : "<<item[i].profit;
        <<endl;
    }

    double profit = 0.0;
    int Rem_capacity = capacity;
    cout << " Item taken : " << endl;
    for(int i=0;i<n;i++){
        if(Rem_capacity <= 0){
            break;
        }
        else if(item[i].weight = Rem_capacity){
            cout << ""
        }
    }

}
