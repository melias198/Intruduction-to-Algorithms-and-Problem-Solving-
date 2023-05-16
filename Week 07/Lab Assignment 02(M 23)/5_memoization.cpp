#include <bits/stdc++.h>

using namespace std;

const int N=1e5+5;
int dp[N];

int operations(int n)
{
    if(n==1)
    {
        return 0;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int ans=operations(n-1);
    if(n%2==0) ans=min(ans,operations(n/2));
    if(n%3==0) ans=min(ans,operations(n/3));

    dp[n]=ans+1;
    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
    }

    cout<<operations(n);
    
    return 0;
}

