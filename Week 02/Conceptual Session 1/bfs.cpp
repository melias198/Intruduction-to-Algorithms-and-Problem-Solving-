#include <bits/stdc++.h>

using namespace std;

const int maxN=100;
vector<int>adja[maxN];
bool visited[maxN];

void BFS(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    cout<<s<<" ";
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto child:adja[node])
        {
            if(!visited[child])
            {
                visited[child]=true;
                q.push(child);
                cout<<child<<" ";
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adja[u].push_back(v);
        adja[v].push_back(u);
    }

    for(int i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(auto child:adja[i])
        {
            cout<<child<<" ";
        }
        cout<<"\n";
    }
    BFS(1);

    return 0;
}

