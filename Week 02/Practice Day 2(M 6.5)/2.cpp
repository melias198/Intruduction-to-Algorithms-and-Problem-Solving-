#include <bits/stdc++.h>

using namespace std;

const int N=100;
int visited[N]={0};
int matrix[N][N];
int node;

void DFS(int src)
{
  cout<<src<<" ";
  visited[src]=1;
  for(int i=0;i<node;i++)
  {
    if(visited[i]==0 && matrix[src][i]==1)
    {
        DFS(i);
    }
  }
}

int main()
{
    int edge;
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        matrix[u][v]=1;
        matrix[v][u]=1;
    }
    int src=0;
    DFS(src);

    return 0;
}

