#include <bits/stdc++.h>

using namespace std;

const int N=1e5;
vector<int>parent_list[N];
int dp[N];

int root,target;

int maximum_distance(int node)
{
    if(node==root)
    {
        return 0;
    }

    if(dp[node]!=-1)
    {
        return dp[node];
    }

    int ans=0;

    for(auto parent:parent_list[node])
    {
        int parent_dist=maximum_distance(parent);
        ans=max(ans,parent_dist);
    }

    dp[node]=ans+1;
    return dp[node];
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }

    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
    }

    cin>>root>>target;

    cout<<maximum_distance(target);
    
    return 0;
}

