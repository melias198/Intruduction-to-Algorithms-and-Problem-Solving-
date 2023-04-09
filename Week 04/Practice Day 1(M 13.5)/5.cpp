#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;
vector<int>adj_list[N];
int visited[N];
int parent[N];
int start_point,end_point;


bool detect_cycle(int node)
{
  visited[node]=1;

  for(auto child:adj_list[node])
  {
    if(child==parent[node])
    {
        continue;
    }

    if(visited[child]==0)
    {
       parent[child]=node;
       bool is_cycle=detect_cycle(child);
       if(is_cycle)
       {
        return true;
       }

    }
    if(visited[child]==1)
    {
        start_point=node;
        end_point=child;
        return true;
    }
  }

  visited[node]=2;
  return false;
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
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool cycle_exist=false;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            bool is_ok=detect_cycle(i);
            if(is_ok)
            {
                cycle_exist=true;
                break;
            }
        }
    }

    if(!cycle_exist)
    {
        cout<<"IMPOSSIBLE"<<'\n';
        return 0;
    }
    
    vector<int>path;
    int temp=start_point;
    path.push_back(start_point);
    while(temp!=end_point)
    {
        path.push_back(parent[temp]);
        temp=parent[temp];
    }
    path.push_back(start_point);
    cout<<path.size()<<"\n";
    for(auto city:path)
    {
        cout<<city<<" ";
    }
    return 0;
}

