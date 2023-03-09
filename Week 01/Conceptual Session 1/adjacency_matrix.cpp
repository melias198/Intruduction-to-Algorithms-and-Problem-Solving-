#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int Adja_Matrix[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            Adja_Matrix[i][j]=0;
        }
    }
    
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        Adja_Matrix[u][v]=1;
        Adja_Matrix[v][u]=1;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<Adja_Matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

