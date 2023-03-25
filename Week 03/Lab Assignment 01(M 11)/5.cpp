#include <bits/stdc++.h>

using namespace std;

const int N=100;
vector<int>adja_list[N];
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

        for(auto child:adja_list[head])
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
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            bfs(i);
            cnt++;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}

