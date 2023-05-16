#include <bits/stdc++.h>

using namespace std;

const int N=1e5;
long long coin[N];
long long dp[N];

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

        dp[0]=0;
       
        for(int i=1;i<=n;i++)
        {
            dp[i]=max(coin[i]+dp[i-2],dp[i-1]);
        }
        cout<<"Case "<<t<<": "<<dp[n]<<'\n';
    }
    return 0;
}

