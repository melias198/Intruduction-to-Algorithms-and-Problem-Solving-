#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;
vector<int>adja_list[N];
int visited[N];
int level[N];
int parent[N];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    level[src]=1;
    parent[src]=-1;

    while(!q.empty())
    {
        int head=q.front();
        q.pop();

        for(auto child:adja_list[head])
        {
            if(visited[child]==0)
            {
                visited[child]=1;
                level[child]=level[head]+1;
                parent[child]=head;
                q.push(child);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    int src=1;
    bfs(src);

    if(visited[n]==0)
    {
        cout<<"IMPOSSIBLE"<<"\n";
        return 0;
    }

    cout<<level[n]<<"\n";

    vector<int>path;
    int des=n;
    while(true)
    {
        path.push_back(des);
        if(des==src)
        {
            break;
        }
        des=parent[des];
    }

    reverse(path.begin(),path.end());

    for(auto child:path)
    {
        cout<<child<<" ";
    }
    
    return 0;
}


