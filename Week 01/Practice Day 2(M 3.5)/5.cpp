#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;
 
    // TODO: Declare your favorite data structures here.
    vector<int>adja_list[n];
 
 
    for(int i = 0 ; i < m ; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        // TODO: Do stuffs with u and v
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }
 
    // TODO: Print your representation like shown in module - 2
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<adja_list[i].size();j++)
        {
            cout<<adja_list[i][j]<<" ";
        }
        cout<<"\n";
    }
 
    return 0;
}
 