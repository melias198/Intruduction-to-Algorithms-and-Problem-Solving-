#include <bits/stdc++.h>

using namespace std;
const int N=100;
vector<int>adja_list[N];
int visited[N];
int level[N];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    level[src]=0;

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
                q.push(child);
            }
        }
    }
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    int src=0;
    bfs(src);

    for(int i=0;i<nodes;i++)
    {
        cout<<"node "<<i<<" -> level: "<<level[i]<<'\n';
    }

    return 0;
}

