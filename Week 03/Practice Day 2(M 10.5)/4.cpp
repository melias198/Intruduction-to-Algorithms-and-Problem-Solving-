#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;
vector<int>adja_list[N];
int visited[N];
int level[N];
int n,m;

bool bfs(int src)
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
                if(child==n)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    bool is_possible=bfs(1);
    if(is_possible)
    {
        cout<<level[n]+1<<"\n";
    }
    else
    {
        cout<<"IMPOSSIBLE"<<"\n";
    }

    return 0;
}

