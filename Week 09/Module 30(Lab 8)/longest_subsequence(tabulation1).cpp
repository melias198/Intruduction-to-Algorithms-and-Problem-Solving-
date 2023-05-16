#include <bits/stdc++.h>

using namespace std;
const int N=100;
int dp[N][N];

string s,t;
int n,m;

int main()
{
    cin>>s>>t;

    n=s.size();
    m=t.size();

    for(int i=0;i<=n;i++)
    {
        dp[i][m]=0;
    }

    for(int i=0;i<=m;i++)
    {
        dp[n][i]=0;
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(s[i]==t[j])
            {
                dp[i][j]=1+dp[i+1][j+1];
            }
            else
            {
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }

    cout<<dp[0][0];
    
    return 0;
}


