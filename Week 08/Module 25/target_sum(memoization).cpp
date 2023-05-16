#include <bits/stdc++.h>

using namespace std;

const int N=105;
const int M=1e5;

int nums[N];
int dp[N][M];

int target_sum(int n,int target)
{
    if(n>=0 && target==0)
    {
        return 1;
    }
    else if(n==0 && target!=0)
    {
        return 0;
    }

    if(dp[n][target]!=-1)
    {
        return dp[n][target];
    }
    
    if(target<0)
    {
        int ans=target_sum(n-1,target+nums[n]);
        dp[n][target]=ans;
        return ans;
    }
    
    int ans=target_sum(n-1,target-nums[n])+target_sum(n-1,target+nums[n]);
    dp[n][target]=ans;
    return ans;    
}

int main()
{
    int n,target;
    cin>>n>>target;

    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=target;j++)
        {
            dp[i][j]=-1;
        }
    }

    cout<<target_sum(n,target)<<'\n';
    
    return 0;
}

