#include <bits/stdc++.h>

using namespace std;
const int N=100;
int dp[N][N];

string s,t;
int n,m;

int LCS(int i,int j)
{
    if(i==s.size() || j==t.size())
    {
        return 0;
    }

    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    if(s[i]==t[j])
    {
        int ans=1+LCS(i+1,j+1);
        dp[i][j]=ans;
        return ans;
    }
    int ans=max(LCS(i+1,j),LCS(i,j+1));
    dp[i][j]=ans;
    return ans;
}

int main()
{
    cin>>s>>t;

    n=s.size();
    m=t.size();

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j]=-1;
        }
    }

    cout<<LCS(0,0);
    
    return 0;
}


