#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;
int h[N];
int dp[N];

int stone(int n)
{
    if(n==1)
    {
        return 0;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int ans1=stone(n-1)+abs(h[n]-h[n-1]);
    // corner case
    if(n==2)
    {
        dp[n]=ans1;
        return ans1;
    }
    
    int ans2=stone(n-2)+abs(h[n]-h[n-2]);

    int ans=min(ans1,ans2);
    dp[n]=ans;

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }

    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
    }

    cout<<stone(n)<<'\n';
    
    return 0;
}

