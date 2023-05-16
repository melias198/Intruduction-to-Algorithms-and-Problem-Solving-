#include <bits/stdc++.h>

using namespace std;

const int N=35;
int dp[N];

int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int ans=fibonacci(n-1)+fibonacci(n-2);
    dp[n]=ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
    }

    cout<<fibonacci(n)<<'\n';
    
    return 0;
}

