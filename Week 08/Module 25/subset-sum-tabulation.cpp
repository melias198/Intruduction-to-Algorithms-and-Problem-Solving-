#include <bits/stdc++.h>

using namespace std;

const int N=105;
const int M=1e5;

int nums[N];
int dp[N][M];


int main()
{
    int n,target;
    cin>>n>>target;

    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
    }

    dp[0][0]=1;
    for(int i=1;i<=target;i++)
    {
        dp[0][i]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            int ans1=dp[i-1][j];
            if(j<nums[i])
            {
                dp[i][j]=ans1;
            }
            else
            {
                int ans2=dp[i-1][j-nums[i]];
                dp[i][j]=ans1 or ans2;
            }
        }
    }

    cout<<dp[n][target]<<"\n";
    
    return 0;
}

