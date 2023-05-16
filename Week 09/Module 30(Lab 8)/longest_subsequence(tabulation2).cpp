#include <bits/stdc++.h>

using namespace std;

const int N=3005;
int dp[N][N];

int main()
{
    string s,t;
    cin>>s>>t;

    int n,m;
    n=s.size();
    m=t.size();

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }

    for(int i=0;i<=m;i++)
    {
        dp[0][i]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==t[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<dp[n][m]<<'\n';
    
    return 0;
}

