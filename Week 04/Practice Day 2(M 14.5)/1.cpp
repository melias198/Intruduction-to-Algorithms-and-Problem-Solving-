#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
const int INF = 1e9;
vector<pair<int, int>> adja_list[N];
int visited[N];
int d[N];
int nodes, edges;

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }
    d[src]=0;

    for(int i=0;i<nodes;i++)
    {
        int selected_node=-1;
        for(int j=1;j<=nodes;j++)
        {
            if(visited[j] == 1)
            {
                continue;
            }
            if(selected_node == -1 || d[selected_node] > d[j])
            {
                selected_node=j;
            }
        }
        visited[selected_node] = 1;

        for(auto adja_entry:adja_list[selected_node])
        {
            int adj_node=adja_entry.first;
            int edges_cost=adja_entry.second;

            if(d[selected_node]+edges_cost < d[adj_node])
            {
                d[adj_node]= d[selected_node]+edges_cost;
            }
        }
    }
}

int main()
{
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adja_list[u].push_back({v, w});
        adja_list[v].push_back({u, w});
    }

    int src=1;

    dijkstra(src);

    for(int i=1;i<=nodes;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
