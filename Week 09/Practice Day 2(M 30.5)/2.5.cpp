#include <bits/stdc++.h>

using namespace std;

string s,t;
int n,m;
int dp[505][505];

int LCS(int i,int j)
{
    if(i==n || j==m)
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
    string word1,word2;
    cin>>word1>>word2;

    s=word1;
    t=word2;

    n=s.size();
    m=t.size();

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j]=-1;
        }
    }

    int ans=LCS(0,0);
    int del=(n+m)-(ans*2);

    cout<<del;
    
    return 0;
}

