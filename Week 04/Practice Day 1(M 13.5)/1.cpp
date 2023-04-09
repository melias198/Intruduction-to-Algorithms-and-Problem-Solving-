#include <bits/stdc++.h>

using namespace std;

const int N=1e5;
vector<int>adj_list[N];
int visited[N];
int level[N];
int parent[N];

void dfs(int node)
{
    visited[node]=1;
    
    for(auto child:adj_list[node])
    {
        if(visited[child]==0)
        {
            parent[child]=node;
            level[child]=level[node]+1;
            dfs(child);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src=1;
    parent[src]=-1;
    level[src]=1;
    dfs(src);

    int dest=n;
    if(visited[dest]==0)
    {
       cout<<"IMPOSSIBLE"<<"\n";
       return 0;
    }

    cout<<level[dest]<<"\n";

    vector<int>path;
    int end=n;

    while(true)
    {
        path.push_back(end);
        if(end==src)
        {
            break;
        }
        end=parent[end];
    }

    reverse(path.begin(),path.end());

    for(auto seq:path)
    {
        cout<<seq<<" ";
    }
    
    return 0;
}


