#include <bits/stdc++.h>

using namespace std;

const int N=1e5+5;
const long long INF=1e18;
vector<pair<int,int>>adj_list[N];
long long d[N];
int visited[N];
int parent[N];
int n,m;

void dijsktra(int src)
{
    for(int i=1;i<=n;i++)
    {
        d[i]=INF;
    }

    d[src]=0;

    priority_queue<pair<long long,int>>pq;
    pq.push({0,src});

    while(!pq.empty())
    {
        pair<long long,int>head=pq.top();
        pq.pop();

        int selected_node=head.second;
        if(visited[selected_node]==1)
        {
            continue;
        }

        visited[selected_node]=1;

        for(auto adj_entry:adj_list[selected_node])
        {
            int adj_node=adj_entry.first;
            int edge_cost=adj_entry.second;

            if(d[selected_node]+edge_cost<d[adj_node])
            {
                d[adj_node]=d[selected_node]+edge_cost;
                parent[adj_node]=selected_node;
                pq.push({-d[adj_node],adj_node});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }

    int src=1;
    dijsktra(src);

    if(visited[n]==0)
    {
        cout<<-1<<"\n";
        return 0;
    }

    int des=n;
    vector<int>path;
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
    cout<<"\n";
    
    return 0;
}

