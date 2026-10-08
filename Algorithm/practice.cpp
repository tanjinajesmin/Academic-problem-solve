#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int  knapsack(int n, int capacity,vector <string> &name, vector <int> &profit, vector <int> &weight, vector <string> &chosen)
{

    vector < vector<int> > KS (n+1, vector <int> (capacity +1,0));
    for(int i= 0;i<=n;i++){
        for(int j=0;i<=capacity ;j++){
            if(weight[i-1]>j){
                KS [i][j] = KS[i-1][j];
            }
            else{
                KS [i][j]= max(KS[i-1][j],profit[i-1]+ KS[i-1][j-weight[i-1]]);
            }

        }
    }
    int i=n,j=capacity;
    while(i>=0 && j>=0){

    }
}
int main()
{
    int n,i;
    cout << "Enter the number of item : ";
    cin >> n;
    vector <int> profit(n),weight(n);
    vector <string> name(n);

    for(int i=0; i<n;i++)
    {
        cout << "Enter the name of item "<< i+1 << " : ";
        cin >> name[i];
        cout << "Enter the profit of item "<<i+1 << " : ";
        cin >> profit[i];
        cout << "Enter the weight of item "<< i+1 << " : ";
        cin >>  weight[i];
    }
    int capacity ;
    cout << "Enter the knapsack capacity : ";
    cin >> capacity;

    vector <string> chosen;

    int max_profit = 0;
    max_profit = knapsack(n,capacity,name,profit,weight,chosen);
    cout << "Maximum profit : "<<max_profit << endl;
    cout  << "Take the chosen Item : "<< endl;

    for(int i= chosen.size()-1;i>=0 && chosen.size>0;i++)
    {
        cout << chosen[i];
        cout << endl;
    }
}
