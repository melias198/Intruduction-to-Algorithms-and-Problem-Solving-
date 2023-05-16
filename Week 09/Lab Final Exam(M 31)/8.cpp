#include <bits/stdc++.h>

using namespace std;
const int N=3005;
int dp[N][N];
string s,t;
int n,m;

int LCS(int i,int j)
{
    if(i<0 || j<0)
    {
        return 0;
    }

    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    if(s[i]==t[j])
    {
        int ans=1+LCS(i-1,j-1);
        dp[i][j]=ans;
        return ans;
    }
    int ans=max(LCS(i-1,j),LCS(i,j-1));
    dp[i][j]=ans;
    return ans;
}

string LCS(string a,string b)
{
    n=a.size();
    m=b.size();

    memset(dp, -1, sizeof(dp));

    int len=LCS(n-1,m-1);

    string str;
    int i = n-1, j = m-1;
    while (i >= 0 && j >= 0) 
    {
        if (s[i] == t[j]) 
        {
            str = s[i] + str;
            i--; j--;
        } 
        else if (i > 0 && dp[i-1][j] >= dp[i][j-1]) 
        {
            i--;
        } 
        else 
        {
            j--;
        }
    }

    return str;
}

int main()
{
    cin>>s>>t;

    cout<<LCS(s,t);

    return 0;
}


