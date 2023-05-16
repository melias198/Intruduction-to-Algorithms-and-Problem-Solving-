#include <bits/stdc++.h>

using namespace std;

const int N=1005;
const unsigned long long M=1000000007;
int grid[N][N];
int dp[N][N];

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

    if(grid[0][0]!=-1) 
    {
        dp[0][0]=1;
    }
    else
    {
        dp[0][0]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(i==0 && j==0)
          {
            continue;
          }
          long long ans=0;
          if(grid[i][j]!=-1)
          {
             if(i>0) ans+=dp[i-1][j]%M;
             if(j>0) ans+=dp[i][j-1]%M;
          }
          dp[i][j]=ans%M;
        }
    }

    cout<<dp[n-1][n-1];
    
    return 0;
}

