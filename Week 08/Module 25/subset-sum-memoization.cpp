#include <bits/stdc++.h>

using namespace std;

const int N=105;
const int M=1e5;

int nums[N];
int dp[N][M];

int subset_sum(int n,int target)
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

    int ans1=subset_sum(n-1,target);
    if(target<nums[n])
    {
        dp[n][target]=ans1;
        return ans1;
    }
    int ans2=subset_sum(n-1,target-nums[n]);

    int ans=ans1 or ans2;
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
        for(int j=1;j<=target;j++)
        {
            dp[i][j]=-1;
        }
    }

    cout<<subset_sum(n,target)<<'\n';
    
    return 0;
}

