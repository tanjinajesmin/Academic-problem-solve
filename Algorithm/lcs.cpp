#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
void LCS(string X,string Y)
{
    int n=X.length();
    int m = Y.length();
    vector<vector<int> > dp(n+1, vector<int>(m+1,0));
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j + 1];
            else if(X[i - 1] != Y[j - 1] && dp[i - 1][j] == dp [i][j-1])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j - 1]);
        }
    }
    string lcs = "";
    int i = n,j = m;
    while(i > 0 && j > 0)
    {
        if(X[i - 1] == Y[j - 1])
        {
            lcs = X[i - 1] + lcs;
            i--;
            j--;
        }
        else if(dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    cout << "\nLength of LCS :" << dp[n][m];
    cout << "\nLCS : "<<lcs <<endl;
    cout << "\nDP Table : \n";
    for(int a= 0;a<=n;a++){
        for(int b=0;b<=m;b++)
        {
            cout << dp[a][b]<< " ";
        }
        cout << endl;
    }

}

int main()
{
    string X,Y;
    cout << "Enter the first string : ";
    cin>> X;
    cout << "Enter the Second string : ";
    cin >> Y;
    LCS(X,Y);
}
