#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;
 
    // TODO: Declare your favorite data structures here.
    int matrix[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=0;
        }
    }
 
 
    for(int i = 0 ; i < m ; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        // TODO: Do stuffs with u and v
        matrix[u][v]=1;
        matrix[v][u]=1;
    }
 
    // TODO: Print your representation like shown in module - 2
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
 
    return 0;
}
 