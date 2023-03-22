#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> adja_list[N];
bool visited[N];

bool BFS(int node1, int node2)
{
    visited[node1]=1;
    for (auto child : adja_list[node1])
    {
        if (!visited[child])
        {
            if (child == node2)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }

    int x=2,y=6;
    if(BFS(x,y))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
