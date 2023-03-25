#include <bits/stdc++.h>

using namespace std;
const int N=2e5+5;

int visited[N];
int color[N];

vector<int>adja_list[N];

bool DFS(int node)
{
    visited[node]=1;

    for(auto adja_node:adja_list[node])
    {
        if(visited[adja_node]==0)
        {
            if(color[node]==1)
            {
                color[adja_node]=2;
            }
            else
            {
                color[adja_node]=1;
            }
            bool is_bicolorable = DFS(adja_node);
            if(!is_bicolorable)
            {
                return false;
            }
        }
        else
        {
            if(color[node]==color[adja_node])
            {
                return false;
            }
        }
    }
    return true;
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
     
    bool is_possible=true;
    
    for(int i=1;i<=nodes;i++)
    {
        if(visited[i]==0)
        {
            color[i]=1;
            bool ok = DFS(i);
            if(!ok)
            {
                is_possible=false;
                break;
            }
        }
    }

    if(!is_possible)
    {
        cout<<"IMPOSSIBLE"<<"\n";
    }
    else
    {
        for(int i=1;i<=nodes;i++)
        {
            cout<<color[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
