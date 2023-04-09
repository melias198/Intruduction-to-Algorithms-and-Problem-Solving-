#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
vector<int> adj_list[N];
int visited[N], parent[N];

bool cycle_detect(int node)
{
    visited[node] = 1;

    for (auto child : adj_list[node])
    {
        if(child==parent[node])
        {
            continue;
        }
        if (visited[child] == 0)
        {
            parent[child]=node;
            bool is_exist = cycle_detect(child);
            if (is_exist)
            {
                return true;
            }
        }
        if (visited[child] == 1)
        {
            return true;
        }
    }

    visited[node]=2;
    return false;
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool cycle_exist=false;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            bool is_ok=cycle_detect(i);
            if(is_ok)
            {
                cycle_exist=true;
                break;
            }
        }
    }

    if(cycle_exist)
    {
        cout<<"Cycle Exist"<<'\n';
    }
    else
    {
        cout<<"No Cycle"<<'\n';
    }

    return 0;
}
