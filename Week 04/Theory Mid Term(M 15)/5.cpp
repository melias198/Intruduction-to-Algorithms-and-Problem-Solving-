#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;
vector<int>adj_list[N];
int visited[N];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;

    while(!q.empty())
    {
        int head=q.front();
        q.pop();

        for(auto child:adj_list[head])
        {
            if(visited[child]==0)
            {
                visited[child]=1;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src=1;
    bfs(src);
    
    int des=n;
    if(visited[des])
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
    return 0;
}

