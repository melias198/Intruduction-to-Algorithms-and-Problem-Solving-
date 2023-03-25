#include <bits/stdc++.h>

using namespace std;

const int N=2e5;
vector<int>adja_list[N];
int visited[N];
stack<int>st;

void dfs(int node)
{
    visited[node]=1;

    for(auto child:adja_list[node])
    {
        if(visited[child]==0)
        {
            dfs(child);
        }
    }

    st.push(node);

}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adja_list[u].push_back(v);
    }

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
        }
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";

    return 0;
}

