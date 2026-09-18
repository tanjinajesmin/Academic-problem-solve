#include<iostream>
using namespace std;

int maximumToys(int prices[],int n,int k)
{
    //sorting ascending order
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(prices[i]>prices[j]){
                int temp = prices[i];
                prices[i]=prices[j];
                prices[j]=temp;
            }
        }
    }
    int sum=0;
    int caunt=0;

    //buying cheapest toys first
    for(int i=0;i<n;i++)
    {
        if(sum + prices[i]<=k){
            sum= sum+prices[i];
            caunt++;
        }
        else{
            break;
        }
    }
    return caunt;
}

int main()
{
    int n,k;
    cin >> n >> k;
    int prices[n];
    for(int i=0;i<n;i++){

        cin>> prices[i];
    }

    cout << maximumToys(prices,n,k);
    return 0;
}

