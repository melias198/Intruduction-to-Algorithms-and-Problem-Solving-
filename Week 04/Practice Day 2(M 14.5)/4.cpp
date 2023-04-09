#include <bits/stdc++.h>

// disjkstra not allow this problem

using namespace std;
const int N=1e5;
const int INF=1e10;
vector<pair<int,int>>adj_list[N];
int d[N];
int n,m,q;

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

        for(auto adj_entry:adj_list[selected_node])
        {
            int adj_node=adj_entry.first;
            int edge_cost=adj_entry.second;

            if(d[selected_node]+edge_cost<d[adj_node])
            {
                d[adj_node]=d[selected_node]+edge_cost;
                pq.push({-d[adj_node],adj_node});
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m>>q;

    for(int i=0;i<m;i++)
    {
      int u,v,w;
      cin>>u>>v>>w;
      adj_list[u].push_back({v,w});
      adj_list[v].push_back({u,w});
    }

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        dijsktra(a);
        if(d[b]==INF)
        {
            cout<<-1<<"\n";
        }
        else
        {
             cout<<d[b]<<"\n";
        }
    }
    
    return 0;
}

