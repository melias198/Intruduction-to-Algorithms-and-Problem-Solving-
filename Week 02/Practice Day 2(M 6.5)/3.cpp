#include <bits/stdc++.h>

using namespace std;
const int N= 1e5;
int visited[N];
vector<int>adja_list[N];
int check[N];

void BFS(int node)
{
   queue<int>q;
   q.push(node);
   visited[node]=1;
   
   while(!q.empty())
   {
      int adja_node=q.front();
      q.pop();
      cout<<adja_node<<" ";
      for(auto child:adja_list[adja_node])
      {
        check[child]++;
        if(visited[child]==0)
        {
            visited[child]=1;
            q.push(child);
        }
      }
   }
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adja_list[u].push_back(v);
        adja_list[v].push_back(u);
    }
    int src=0;
    BFS(src);
    cout<<"\n";
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->"<<check[i]<<"\n";
    }

    return 0;
}

