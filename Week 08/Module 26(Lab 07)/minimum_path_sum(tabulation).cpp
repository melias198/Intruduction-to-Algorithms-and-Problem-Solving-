#include <bits/stdc++.h>

using namespace std;

const int N=200;
int grid[N][N];
int dp[N][N];


int main()
{
    int row,col;
    cin>>row>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>grid[i][j];
        }
    }

    dp[0][0]=grid[0][0];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==0 && j==0)
            {
                continue;
            }

            int ans1,ans2;
            if(i>0) ans1=dp[i-1][j]+grid[i][j];
            if(j>0) ans2=dp[i][j-1]+grid[i][j];
            int ans=min(ans1,ans2);
            dp[i][j]=ans;
        }
    }

    cout<<dp[row-1][col-1];

    return 0;
}

