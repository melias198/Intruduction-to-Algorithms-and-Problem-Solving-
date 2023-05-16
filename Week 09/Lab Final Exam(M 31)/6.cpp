#include <bits/stdc++.h>

using namespace std;

const int N=200009;
vector<int>adj_list[N];
int visited[N];
int node_type[N];

long long int bfs(int src)
{
    long long int lykan_num=0,vampire_num=0;
    queue<int>q;
    visited[src]=1;
    q.push(src);
    node_type[src]=1;
    lykan_num++;

    while(!q.empty())
    {
        int head=q.front();
        q.pop();

        for(auto adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                q.push(adj_node);
                visited[adj_node]=1;

                if(node_type[head]==1)
                {
                   node_type[adj_node]==0;
                   vampire_num++;
                }
                else
                {
                    node_type[adj_node]=1;
                    lykan_num++;
                }
            }
        }
    }
    return max(lykan_num,vampire_num);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    int tst=0;
    while(t--)
    {
        
    memset(visited,0,sizeof(visited));
    memset(node_type,0,sizeof(node_type));
    for(int i=1;i<=N;i++)
    {
        adj_list[i].clear();
    }
    
    int n;
    cin>>n;

    long long int sum=0;

    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }


    for(int i=0;i<N;i++)
    {
        if(visited[i]==0 && !adj_list[i].empty())
        {
           sum+=bfs(i);
        }
    }

    cout<<"Case "<<++tst<<": "<<sum<<'\n';

    }
    return 0;
}

