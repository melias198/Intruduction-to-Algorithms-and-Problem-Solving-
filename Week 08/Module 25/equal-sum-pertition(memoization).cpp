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
    dp[n][target]=ans;
    return ans;
}

int main()
{
    int n,total_sum=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
        total_sum+=nums[i];
    }

    if(total_sum%2==1)
    {
        cout<<"false"<<'\n';
    }
    else
    {
        int target=total_sum/2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=total_sum;j++)
            {
                dp[i][j]=-1;
            }
        }
        int final_ans=subset_sum(n,target);
        if(final_ans)
        {
            cout<<"true"<<'\n';
        }
        else
        {
            cout<<"false"<<'\n';
        }
    }
    
    return 0;
}

