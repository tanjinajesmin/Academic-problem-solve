#include<iostream>
#include<algorithm>
using namespace std;

int maximumToys(int prices[],int n,int k)
{
    sort(prices,prices+n);
    int sum=0;
    int caunt =0;
    for(int i=0;i<n;i++){
        if(sum+prices[i]<=k){
            sum = sum+ prices[i];
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
    cin>> n>> k;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    cout<<maximumToys(prices,n,k);
    return 0;
}
