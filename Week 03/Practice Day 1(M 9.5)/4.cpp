#include <bits/stdc++.h>

using namespace std;

const int N=1000;
int matrix[N][N];

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        matrix[u][v]=1;
    }

    bool ans=true;

    for(int i=1;i<=nodes;i++)
    {
        for(int j=1;j<=nodes;j++)
        {
            if(matrix[i][j]==1 && matrix[j][i]!=1)
            {
                ans=false;
                i=nodes+1;
                break;
            }
        }
    }

    if(ans)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

    return 0;
}

