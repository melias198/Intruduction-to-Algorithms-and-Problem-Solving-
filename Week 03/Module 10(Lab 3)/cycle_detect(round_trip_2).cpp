#include <bits/stdc++.h>

using namespace std;

const int N=2e5;
vector<int>adja_list[N];
int visited[N];

bool dfs(int node)
{
    visited[node]=1;

    for(auto child:adja_list[node])
    {
        if(visited[child]==0)
        {
            bool got_cycle=dfs(child);
            if(got_cycle)
            {
                return true;
            }
        }
        else if(visited[child]==1)
        {
            return true;
        }
    }

    visited[node]=2;
    return false;
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
    }

    bool c_exist=false;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            bool cycle_exist=dfs(i);
            if(cycle_exist)
            {
                c_exist=true;
                break;
            }
        }
    }

    if(c_exist)
    {
        cout<<"Cycle Exist!"<<"\n";
    }
    else
    {
        cout<<"Not Exist!"<<"\n";
    }

    return 0;
}

