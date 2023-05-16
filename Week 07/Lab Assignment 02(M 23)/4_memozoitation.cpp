#include <bits/stdc++.h>

using namespace std;
const int N=40;
int dp[N];

int tribonacci(int n)
{
    if(n==0) return 0;
    if(n==1 || n==2) return 1;

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int ans=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
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

    cout<<tribonacci(n)<<'\n';
    
    return 0;
}

