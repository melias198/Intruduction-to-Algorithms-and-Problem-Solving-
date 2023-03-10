#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes=4;
    int matrix[nodes][nodes];

    // int matrix[nodes][nodes]={}; for 0 initialize for compiler update version

    memset(matrix,0,sizeof(matrix));

    matrix[0][1]=1;
    matrix[1][0]=1;

    matrix[1][2]=1;
    matrix[2][1]=1;

    matrix[2][3]=1;
    matrix[3][2]=1;
    
    matrix[3][1]=1;
    matrix[1][3]=1;


    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

