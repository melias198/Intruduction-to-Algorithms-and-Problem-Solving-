#include <bits/stdc++.h>

using namespace std;

const int N=60;
const int M=1001;
const int MOD=100000007;

int coin[N],limit[N];
int dp[N][M];

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

    int ans=coin_change(n-1,target);
    for(int i=1;i<=limit[n];i++)
    {
        if(target-i*coin[n]<0)
        {
            break;
        }
        int ret=coin_change(n-1,target-i*coin[n]);
        ans=(ret+ans)%MOD;
    }
    dp[n][target]=ans;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,tst=0;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cin>>coin[i];
        }

        for(int i=1;i<=n;i++)
        {
            cin>>limit[i];
        }

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                dp[i][j]=-1;
            }
        }

        cout<<"Case "<<++tst<<": "<<coin_change(n,k)<<"\n";
    }
    return 0;
}

