#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes=4;
    int matrix[nodes][nodes];

    memset(matrix,0,sizeof(matrix));

    matrix[0][1]=1;
    matrix[1][0]=1;

    matrix[1][2]=1;
    matrix[2][1]=1;

    matrix[2][3]=1;
    matrix[3][2]=1;
    
    matrix[3][1]=1;
    matrix[1][3]=1;

    vector<int>v[nodes];

    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            if(matrix[i][j]==1)
            {
                v[i].push_back(j);
            }
        }
    }

    for(int i=0;i<nodes;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


