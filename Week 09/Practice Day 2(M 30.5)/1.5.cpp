#include <bits/stdc++.h>

using namespace std;
string a,t;
int dp[400][400];

int LCS(int i,int j)
{
    if(i==a.size() || j==t.size())
    {
        return 0;
    }

    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    if(a[i]==t[j])
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
    string s;
    cin>>s;

    a=s;

    int n=s.size();
    
    t=s;
    reverse(t.begin(),t.end());

    for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=n;j++)
      {
        dp[i][j]=-1;
      }
    }

    cout<<LCS(0,0);

    return 0;
}

