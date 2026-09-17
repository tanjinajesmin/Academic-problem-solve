#include<iostream>
using namespace std;

struct Item
{
    int weight;
    int profit;
    double Ratio;
    char name[10];
};

int main()
{
    int n;

    cout << "Enter the number of item : ";
    cin >> n;

    Item item[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name of item " << i + 1 << " : ";
        cin >> item[i].name;

        cout << "Enter the weight of item " << i + 1 << " : ";
        cin >> item[i].weight;

        cout << "Enter the profit of item " << i + 1 << " : ";
        cin >> item[i].profit;

        item[i].Ratio = (double)item[i].profit / item[i].weight;
    }

    int capacity;

    cout << "Enter the knapsack capacity : ";
    cin >> capacity;

    // Sorting according to Ratio (Descending)
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(item[i].Ratio < item[j].Ratio)
            {
                Item temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }

    cout << "\nSorted Items : \n";

    for(int i = 0; i < n; i++)
    {
        cout << "Name : " << item[i].name
             << " Weight : " << item[i].weight
             << " Profit : " << item[i].profit
             << " Ratio : " << item[i].Ratio
             << endl;
    }

    double profit = 0.0;
    int Rem_capacity = capacity;

    cout << "\nItems Taken : \n";

    for(int i = 0; i < n; i++)
    {
        if(Rem_capacity <= 0)
        {
            break;
        }
        else if(item[i].weight <= Rem_capacity)
        {
            profit += item[i].profit;
            Rem_capacity -= item[i].weight;

            cout << "Full Item Taken : "
                 << item[i].name
                 << " Weight : " << item[i].weight
                 << " Profit : " << item[i].profit
                 << endl;
        }
        else
        {
            double fraction = (double)Rem_capacity / item[i].weight;

            profit += item[i].profit * fraction;

            cout << "Fraction Item Taken : "
                 << item[i].name
                 << " Fraction : " << fraction
                 << " Weight Taken : " << Rem_capacity
                 << endl;

            Rem_capacity = 0;
        }
    }

    cout << "\nMaximum Profit : " << profit << endl;

    return 0;
}
