#include <bits/stdc++.h>

using namespace std;

const int N=1005;
const unsigned long long M=1000000007;
int grid[N][N];
int dp[N][N];

long long grid_paths(int n,int m)
{
    if(n==0 && m==0)
    {
        if(grid[n][m]!=-1) return 1;
        return 0;
    }

    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }

    long long ans=0;
    if(grid[n][m]!=-1)
    {
    if(n>0) ans+=grid_paths(n-1,m)%M;
    if(m>0) ans+=grid_paths(n,m-1)%M;
    }

    dp[n][m]=ans%M;
    return ans%M;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='*')
            {
                grid[i][j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=-1;
        }
    }

    cout<<grid_paths(n-1,n-1);
    
    return 0;
}

