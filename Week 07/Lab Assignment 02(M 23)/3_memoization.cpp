#include <bits/stdc++.h>

using namespace std;

const int N=1e5+5;
map<long long,int>CountArr;
long long dp[N]; 

long long points(long long n)
{
    if(n==0) return 0;
    if(n==1) return CountArr[1];

    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    long long ans= max(points(n-1),points(n-2)+CountArr[n]*n);
    dp[n]=ans;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,maxx=-1;
    cin>>n;

    while(n--)
    {
        int x;
        cin>>x;
        CountArr[x]++;
        maxx=max(maxx,x);
    }

    memset(dp,-1,sizeof(dp));

    cout<<points(maxx)<<'\n';
    
    return 0;
}

