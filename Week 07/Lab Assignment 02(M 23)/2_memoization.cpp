#include <bits/stdc++.h>

using namespace std;

const int N=1e5;
long long coin[N];
long long dp[N];

long long earn_coins(int n)
{
    if(n==0)
    {
        return 0;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    long long ans=max(coin[n]+earn_coins(n-2),earn_coins(n-1));
    dp[n]=ans;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin>>test_case;
    for(int t=1;t<=test_case;t++)
    {
        int n;
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            cin>>coin[i];
        }

        for(int i=1;i<=n;i++)
        {
            dp[i]=-1;
        }

        cout<<"Case "<<t<<": "<<earn_coins(n)<<'\n';

    }
    return 0;
}

