#include <bits/stdc++.h>

using namespace std;
const int N=1e5;
int visited[N];
vector<int>adja_list[N];
int check[N];

void DFS(int node)
{
    cout<<node<<" ";
    visited[node]=1;

    for(auto adja_node:adja_list[node])
    {
        check[adja_node]++;
        if(visited[adja_node]==0)
        {
            DFS(adja_node);
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
    DFS(src);

    cout<<"\n";
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->"<<check[i]<<"\n";
    }

    return 0;
}

