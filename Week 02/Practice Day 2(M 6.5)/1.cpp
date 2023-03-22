/*
Rewrite BFS in C++ but this time use an adjacency matrix as graph representation instead of adjacency list.
 Analyse the time and space complexity.
*/

#include<bits/stdc++.h>
using namespace std;

const int N=100;
int Visited[N]={0};
int adj_matrix[N][N];
int node;

void BFS(int src){

    queue<int>q;

    Visited[src]=1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        cout<<head<<" ";

        for(int i=0; i<node; i++){
            if (Visited[i]==0 && adj_matrix[head][i]==1)
            {
                Visited[i]=1;
                q.push(i);
            }
        }
    }
      
}
int main(){

    int edge;
    cin>>node>>edge;

    for (int i = 0; i < edge; i++)
    {
        int u,v;
        cin>>u>>v;
        
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
    }
  
    int src=0;
    BFS(src);
    
    return 0;
}