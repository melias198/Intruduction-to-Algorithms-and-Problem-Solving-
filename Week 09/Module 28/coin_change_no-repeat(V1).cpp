#include <bits/stdc++.h>

using namespace std;

const int N=1e5;
int coins[N];
int dp[100][100];

int coin_change(int n,int target)
{
    if(n==0)
    {
       if(target==0) return 1;
       return 0;
    }

    if(dp[n][target]!=-1)
    {
        return dp[n][target];
    }

    int ans1=coin_change(n-1,target),ans2;
    if(target>=coins[n])
    ans2=coin_change(n-1,target-coins[n]);

    int ans=ans1 or ans2;
    dp[n][target]=ans;
    return ans;
}

int main()
{
    int n,target;
    cin>>n>>target;

    for(int i=1;i<=n;i++)
    {
        cin>>coins[i];
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=target;j++)
        {
            dp[i][j]=-1;
        }
    }

    cout<<coin_change(n,target);
    
    return 0;
}

