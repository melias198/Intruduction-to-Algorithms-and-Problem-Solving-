#include <bits/stdc++.h>

using namespace std;

const int N=105;
const int M=1e5;

int nums[N];
int dp[N][M];


int main()
{
    int n,total_sum=0;
    cin>>n;

    for(int i=0;i<n;i++)
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
       
        dp[0][0]=1;

        for(int i=1;i<=target;i++)
        {
            dp[0][i]=0;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=target;j++)
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

        if(dp[n][target])
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

