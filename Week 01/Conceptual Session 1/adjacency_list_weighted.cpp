#include <bits/stdc++.h>

using namespace std;

const int MAX=100;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>Adja_List[MAX];
    
    for(int i=1;i<=e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        Adja_List[u].push_back({v,w});
        Adja_List[v].push_back({u,w});
    }

    for(int i=0;i<=n;i++)
    {
        cout<<i<<" -> ";
        for(auto j:Adja_List[i])
        {
            cout<<"{"<<j.first<<","<<j.second<<"}"<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

