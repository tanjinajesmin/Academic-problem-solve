#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long W;
        cin >> n >> W;

        long long L = (W+1)/2;
        vector<long long>w(n);
        bool found = false;
        for(int i=0;i<n;i++){
            cin >> w[i];
        }
        //case 1 : single item answer
        for(int i=0;i<n;i++){
            if(w[i]>=L && w[i]<= W){
                cout << 1 << endl;
                cout << i+1 << endl;
                found = true;
                break;
            }
        }
        if(found) continue;
        // case 2
        vector<int>ans;
        long long sum = 0;

        for(int i=0;i<n;i++){
        if(w[i]<L && w[i]<W){
            sum +=w[i];
            ans.push_back(i+1);
            if(sum >= L)break;
        }

        }
        if(sum>=L){
            cout << ans.size()<< "\n";
            for(int x:ans)
        }
    }
}
