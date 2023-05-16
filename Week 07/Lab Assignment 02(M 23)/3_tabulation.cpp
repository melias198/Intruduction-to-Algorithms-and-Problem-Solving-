#include <bits/stdc++.h>

using namespace std;

const int N=1e5+5;
map<long long,int>CountArr;
long long dp[N]; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,maxx=-1;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        CountArr[x]++;
        maxx=max(maxx,x);
    }

    dp[0]=0;
    dp[1]=CountArr[1];

    for(long long i=2;i<N;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+(CountArr[i]*i));
    }

    cout<<dp[maxx]<<"\n";

    return 0;
}
