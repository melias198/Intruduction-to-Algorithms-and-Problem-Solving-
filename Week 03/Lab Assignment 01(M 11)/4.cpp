#include <bits/stdc++.h>

using namespace std;

const int N=100;
vector<int>adja_list[N];
int visited[N];
int bipartite[N];

bool dfs(int node)
{
    visited[node]=1;

    for(auto child:adja_list[node])
    {
        if(visited[child]==0)
        {
            if(bipartite[node]==1)
            {
                bipartite[child]=2;
            }
            else
            {
                bipartite[child]=1;
            }
            bool is_bipartite=dfs(child);
            if(!is_bipartite)
            {
                return false;
            }
        }
        else
        {
            if(bipartite[node]==bipartite[child])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    bool is_bipartite=true;

    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            bipartite[i]=1;
            bool ok=dfs(i);
            if(!ok)
            {
                is_bipartite=false;
                break;
            }
        }
    }

    if(is_bipartite)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;
}

