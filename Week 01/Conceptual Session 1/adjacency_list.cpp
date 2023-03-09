#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>Adja_List[n+1];
    
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cin>>u>>v;
        Adja_List[u].push_back(v);
        Adja_List[v].push_back(u);
    }

    for(int i=1;i<=n;i++)
    {
        cout<<i<<" -> ";
        for(auto j:Adja_List[i])
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

