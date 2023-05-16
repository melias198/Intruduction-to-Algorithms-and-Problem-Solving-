#include <bits/stdc++.h>

using namespace std;

const int N=200;
int grid[N][N];
int dp[N][N];

int minimum_sum(int n,int m)
{
    if(n==0 && m==0)
    {
        return grid[0][0];
    }

    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }

    int ans1,ans2;

    if(n>0) ans1=minimum_sum(n-1,m)+grid[n][m];
    if(m>0) ans2=minimum_sum(n,m-1)+grid[n][m];

    int ans=min(ans1,ans2);
    dp[n][m]=ans;
    return ans;
}

int main()
{
    int row,col;
    cin>>row>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>grid[i][j];
            dp[i][j]=-1;
        }
    }

    cout<<minimum_sum(row-1,col-1);
    
    return 0;
}

